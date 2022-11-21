#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//#include "bubble_sort.h"
//#include "quick_sort.h"
#include "merge_sort.h"

int main(int argc, char** argv)
{

    //int arr[9] = {3,7,4,6,2,1,0,8,5};
    //print_int_array(arr,9);
    //merge_sort(arr,9);
    //print_int_array(arr,9);

    //int arr[] = {9,7,1,3,5};
    ////int arr[] = {9,7,3,5};
    //int len = sizeof(arr)/sizeof(arr[0]);
    //print_int_array(arr,len);
    //merge_sort(arr,len);
    //print_int_array(arr,len);

    int arr[] = {9,7,1,3,0};
    int len = sizeof(arr)/sizeof(arr[0]);

    merge_sort(arr,len);
    print_int_array(arr,len);

    /*
    int left_index = 0;
    int right_index = sizeof(arr)/sizeof(arr[0]);
    int middle_index = (right_index+left_index)/2;

    printf("%d --- %d --- %d\n\n",left_index,right_index,middle_index);

    int left_size = middle_index - left_index;
    int right_size = right_index - middle_index;

    printf("%d --- %d\n\n",left_size,right_size);

    int left_array[left_size];
    int right_array[right_size];

    for(int i=0;i<left_size;i++)
    {
        left_array[i] = arr[left_index];
        left_index++;
    }

    for(int j=0;j<right_size;j++)
    {
        right_array[j] = arr[middle_index];
        middle_index++;
    }

    left_index = 0;
    middle_index = (right_index+left_index)/2;
    int temp_index = left_index;

    print_int_array(left_array,left_size);
    print_int_array(right_array,right_size);

    //int LEFT = left_index;
    //int RIGHT = middle_index;
    int LEFT = 0;
    int RIGHT = 0;
    while (LEFT<left_size&&RIGHT<right_size)
    {
        if(left_array[LEFT]>right_array[RIGHT])
        {
            arr[temp_index] = right_array[RIGHT];
            printf("Assigned array value: %d\n",arr[temp_index]);
            printf("Value from right_array: %d\n",right_array[RIGHT]);
            RIGHT++;
            temp_index++;
        }
        else
        {
            arr[temp_index] = left_array[LEFT];
            printf("Assigned array value: %d\n",arr[temp_index]);
            printf("Value from left_array: %d\n",left_array[LEFT]);
            LEFT++;
            temp_index++;
        }
    }

    while (LEFT<left_size)
    {
        arr[temp_index] = left_array[LEFT];
        printf("Assigned array value: %d\n",arr[temp_index]);
        printf("Value from left_array: %d\n",left_array[LEFT]);
        LEFT++;
        temp_index++;
    }
    
    while (RIGHT<right_size)
    {
        arr[temp_index] = right_array[RIGHT];
        printf("Assigned array value: %d\n",arr[temp_index]);
        printf("Value from right_array: %d\n",right_array[RIGHT]);
        RIGHT++;
        temp_index++;
    }

    print_int_array(arr,right_index);

*/

    return 0;
}