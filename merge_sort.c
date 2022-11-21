#include "merge_sort.h"

void __merge(int *array,int first, int middle, int last)
{
    int left_size = middle-first;
    int right_size = last-middle;

    int left_array[left_size];
    int right_array[right_size];

    int left_index = first;
    int right_index = middle;

    for(int i=0;i<left_size;i++)
    {
        left_array[i] = array[left_index++];
    }

    for(int j=0;j<right_size;j++)
    {
        right_array[j] = array[right_index++];
    }

    int LEFT = 0;
    int RIGHT = 0;
    int TMP = first;

    while(LEFT<left_size&&RIGHT<right_size)
    {
        if(left_array[LEFT]<right_array[RIGHT])
        {
            array[TMP++] = left_array[LEFT++];
        }
        else
        {
            array[TMP++] = right_array[RIGHT++];
        }
    }

    while(LEFT<left_size)
    {
        array[TMP++] = left_array[LEFT++];
    }

    while (RIGHT<right_size)
    {
        array[TMP++] = right_array[RIGHT++];
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