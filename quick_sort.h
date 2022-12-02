#ifndef __QUICK_SORT_H__
#define __QUICK_SORT_H__

#include "usefull.h"

//Partition should returns a pivot, quick_sort should just be a function that is being called first, then a function that
//is called recursively, partition is called in meantime and again it retuirns pivot/pivot index

int __pivot(int* array, int first, int last);
void __sort(int* array, int first, int last);
void quick_sort(int* array, int length);

#endif