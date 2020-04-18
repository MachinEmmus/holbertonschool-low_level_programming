#include "search_algos.h"
/**
 * linear_search - search a value of form linear
 * @array: list of numbers
 * @size: size to array
 * @value: value to search
 * Return: index is found or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i <= size - 1; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
