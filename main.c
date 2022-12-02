#include "sorting_algorithms.h"

int main(int argc, char** argv)
{

    int arr1[] = {0,6,1,2,5,6,8,2,3,0,4};
    int len1 = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[] = {9,2,8,5,2,4,5,1,2,5,8};
    int len2 = sizeof(arr2)/sizeof(arr2[0]);

    int arr3[] = {5,6,2,1,9,0,2,3,8,3,4};
    int len3 = sizeof(arr3)/sizeof(arr3[0]);

    bubble_sort(arr1,len1);
    print_int_array(arr1,len1);

    merge_sort(arr2,len2);
    print_int_array(arr2,len2);

    quick_sort(arr3,len3);
    print_int_array(arr3,len3);

    return 0;
}