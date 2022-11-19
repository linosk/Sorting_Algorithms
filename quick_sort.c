#include "quick_sort.h"

void __sort(int* array, int first, int last)
{
    if(first<last)
    {
        int li = first;
        int pi = last-1;
        int ri = last-1;
        while(li<ri)
        {
            if(array[li]>array[pi])
            {
                if(array[ri]<array[pi])
                    swap_int_array_elements(&array[li],&array[ri]);
                else
                    ri--;
            }
            else
                li++;
        }
        swap_int_array_elements(&array[ri],&array[pi]);
        __sort(array,first,ri);
        __sort(array,ri+1,last);
    }
}

void quick_sort(int* array, int length)
{
    __sort(array,0,length);
}