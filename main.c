#include "sorting_algorithms.h"

int main(int argc, char** argv)
{

    int arr[] = {1,3,5,8,9,11,24};
    int len = sizeof(arr)/sizeof(arr[0]);
    int i = binary_search_int_array(arr,len,1);
    printf("%d\n",i);

    return 0;
}