#ifndef __USEFULL_H__
#define __USEFULL_H__

#include <stdio.h>

#include <assert.h>

void print_int_array(int* array, int length);
void swap_int_array_elements(int* first, int* second);
int __binary_search_int_array(int* Array, int First, int Last, int Searched);
int binary_search_int_array(int* Array, int Length, int Searched);

#endif