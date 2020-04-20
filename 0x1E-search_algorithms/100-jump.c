#include "search_algos.h"
#include <math.h>


/**
 * jump_search - Searches for a value in an array
 * @array: The size of the array we are looking through
 * @size: The size of the array
 * @value: The value that the function is trying to find.
 * Return: The index of the value or if value is not present in array
 * or if array is NULL, your function must return -1
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
		printf("Value checked array[%d] = [%d]\n", low, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
