#ifndef __SEARCH_ALGOS_H__
#define __SEARCH_ALGOS_H__

#include <stdio.h>
#include <stdlib.h>

int found(int *array, size_t size, size_t low, size_t high, int value);
void print_array(int *array, size_t low, size_t high);

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif/*__SEARCH_ALGOS_H__*/
