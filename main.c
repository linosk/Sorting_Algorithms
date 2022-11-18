#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "bubble_sort.h"

int main(int argc, char** argv)
{

    //int len = 9;
    //int* arr = malloc(len*sizeof(int));

    int arr[9] = {9,8,7,6,5,4,3,2,1};

    //srand(time(0));
    //for(int i=0;i<len;i++)
    //{
    //    arr[i] = rand()%9;
    //}

    print_int_array(arr,9);
    bubble_sort(arr,9);    
    print_int_array(arr,9);



    //free(arr);

    return 0;
}