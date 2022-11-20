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

    int arr[] = {9,7,1,3,5};
    //int arr[] = {9,7,3,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    print_int_array(arr,len);
    merge_sort(arr,len);
    print_int_array(arr,len);

    return 0;
}