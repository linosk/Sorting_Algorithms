#include "quick_sort.h"

int __pivot(int* array, int first, int last)
{
    int li = first;
    int ri = last;
    int pi = last;
    while(li<ri)
    {
        if(array[li]>array[pi])
        {
            if(array[ri]<array[pi])
            {
                swap_int_array_elements(&array[li],&array[ri]);
            }
            else
                ri--;
        }
        else
            li++;
    }
    swap_int_array_elements(&array[ri],&array[pi]);

    return ri;
}

void __sort(int* array, int first, int last)
{
    if(first<last)
    {
        int pivot = __pivot(array,first,last);
        __sort(array,first,pivot-1);
        __sort(array,pivot+1,last);
    }
}

void quick_sort(int* array, int length)
{
    __sort(array,0,length-1);
}