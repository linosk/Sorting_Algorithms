#include "usefull.h"

void print_int_array(int* array, int length)
{
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