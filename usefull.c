#include "usefull.h"

void print_int_array(int* array, int length)
{
    if (length<1)
        return;

    for(int i=0;i<length;i++)
    {
        printf("%d",array[i]);       
    }
    printf("\n");
}

void swap_int_array_elements(int* first, int* second)
{
    int buff = *first;
    *first = *second;
    *second = buff;
}

int __binary_search_int_array(int* Array, int First, int Last, int Searched)
{
    int Mi = (First+Last)/2;
    assert(Mi>=0);
    if(Array[Mi]==Searched)
        return Mi;
    else if(Array[Mi]>Searched)
        __binary_search_int_array(Array,First,Mi-1,Searched);
    else if(Array[Mi]<Searched)
        __binary_search_int_array(Array,Mi+1,Last,Searched);
}

int binary_search_int_array(int* Array, int Length, int Searched)
{
    int Index = -1;
    Index = __binary_search_int_array(Array,0,Length,Searched);
    return Index;
}