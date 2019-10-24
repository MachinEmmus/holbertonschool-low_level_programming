#include "stdlib.h"

/**
 * array_iterator - ...
 * @array: my array
 * @size: long my array
 * @action: funtion to my array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t x;
	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
		action(array[x]);
}
