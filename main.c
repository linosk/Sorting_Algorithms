#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//#include "bubble_sort.h"
#include "quick_sort.h"

int main(int argc, char** argv)
{
    int arr[15] = {9,3,7,4,1,5,6,1,6,2,1,0,8,5,4};
    print_int_array(arr,15);
    quick_sort(arr,15);
    print_int_array(arr,15);

    //int arr[9] = {3,7,4,6,2,1,0,8,5};
    //print_int_array(arr,9);
    //quick_sort(arr,9);
    //print_int_array(arr,9);

    //int arr[5] = {9,7,1,3,5};
    //print_int_array(arr,5);
    //quick_sort(arr,5);
    //print_int_array(arr,5);

    return 0;
}