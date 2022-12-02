#include "merge_sort.h"

void __merge(int *array, int first, int middle, int last)
{
    int sl = middle-first+1;
    int sr = last-middle;
    int al[sl];
    int ar[sr];
    int il = first;
    int ir = middle+1;
    for(int i=0;i<sl;i++)
    {
        al[i] = array[il];
        il++;
    }
    for(int j=0;j<sr;j++)
    {
        ar[j] = array[ir];
        ir++;
    }
    int til = 0;
    int tir = 0;
    int tit = first;
    while(til<sl&&tir<sr)
    {
        if(al[til]>ar[tir])
        {
            array[tit] = ar[tir];
            tit++;
            tir++;
        }
        else
        {
            array[tit] = al[til];
            tit++;
            til++;
        }
    }
    while(til<sl)
    {
        array[tit] = al[til];
        tit++;
        til++;
    }
    while(tir<sr)
    {
        array[tit] = ar[tir];
        tit++;
        tir++;
    }
}

void __divide(int* array, int first, int last)
{
    if(first<last)
    {
        int middle = (last+first)/2;
        __divide(array,first,middle);
        __divide(array,middle+1,last);
        __merge(array,first,middle,last);
    }
}

void merge_sort(int* array, int length)
{
    __divide(array,0,length-1);
}