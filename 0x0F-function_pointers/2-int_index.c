#include "stdlib.h"

/**
 * int_index - index my array
 * @array: this.
 * @size: long my array
 * @cmp: pointer to function
 * Return: int result
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int x;
	if (array == NULL || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
		if (cmp(array[x]))
			return (x);
	return (-1);
}
