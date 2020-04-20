#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in an array
 * @array: array with values
 * @size: size of array
 * @value: The value to found in the array
 * Return: index if found -1 if error
 */
int jump_search(int *array, size_t size, int value)
{
	int jump, low, high, i;

	if (array == NULL)
		return (-1);
	jump = sqrt(size);

	for (i = 0; i < (int)size; i += jump)
	{
		if (value <= array[i])
		{
			low = i - 3;
			high = i;
			printf("Value found between indexes [%d] and [%d]\n", low, high);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	if (i > (int)size)
	{
		low = i - jump;
		high = low;
		printf("Value found between indexes [%d] and [%d]\n", low, i);
	}
	for (i = low; i <= high; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
