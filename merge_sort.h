#ifndef __MERGE_SORT_H__
#define __MERGE_SORT_H__

#include "usefull.h"

void __merge(int *array, int first, int middle, int last);
void __divide(int* array, int first, int last);
void merge_sort(int* array, int length);

#endif