#include "merge_sort.h"

void __merge(int *array,int first, int middle, int last)
{
    int lsize = middle - first;
    int rsize = last - middle;
    int left[lsize];
    int right[rsize];
    int lindex = first;
    int rindex = middle;
    for(int i=0;i<lsize;i++)
    {
        left[i] = array[lindex];
        lindex++;
    }
    for(int i=0;i<rsize;i++)
    {
        right[i] = array[rindex];
        rindex++;
    }
    lindex = first;
    rindex = middle;
    int tindex = first;
    while (lindex<middle&&rindex<last)
    {
        if(left[lindex]>right[rindex])
        {
            array[tindex] = right[rindex];
            rindex++;
        }
        else
        {
            array[tindex] = left[lindex];
            lindex++;
        }
        tindex++;
    }
    while (lindex<middle)
    {
        array[tindex] = left[lindex];
        lindex++;
        tindex++;
    }
    while (rindex<last)
    {
        array[tindex] = right[rindex];
        rindex++;
        tindex++;
    }
}

void __divide(int *array, int first, int last)
{
    if(first<last)
    {
        int middle = (first+last)/2;
        __divide(array,first,middle);
        __divide(array,middle+1,last);
        __merge(array,first,middle,last);
    }
}

void merge_sort(int* array, int length)
{
    __divide(array,0,length);
}