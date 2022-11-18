#include "bubble_sort.h"

void bubble_sort(int* array, int length)
{
    int counter = 0;

    //In the worst possible case the minimal number of rounds to sort the array with bubblesort is equal to number of elements in an array
    //and as the numeration in starts with 0 the number of rounds in this case should be length minus 1
    for(int i=0;i<length-1;i++)
    {
        //With every round of sorting there is certainty that the biggest element is always moved to the end of an arrray, so sorting the last element in
        //the second round is pointless since the value will not change its position. In that case it is a good idea to decrease number of sorted elements
        //each round to make the loop execution run faster
        for(int j=0;j<length-counter-1;j++)
        {
            if(array[j]>array[j+1])
                swap_int_array_elements(&array[j],&array[j+1]);            
        }
        counter++;
    }
}