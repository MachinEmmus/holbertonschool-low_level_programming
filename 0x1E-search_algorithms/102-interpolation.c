
#include "search_algos.h"

/**
 * interpolation_search - interpolation
 * @array: is a pointer to the first element
 * @size: number of elements
 * @value: search
 * Return: -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = 0;

	if (array == NULL || size == 0)
		return (-1);

	high = (int) size - 1;

	while ((array[low] != array[high]))
	{
		size_t pos = low + (
			((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));

		if (value < array[low] || value > array[high])
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
			low = pos + 1;

		else if (array[pos] > value)
			high = pos - 1;
		else
			return (pos);
	}
	return (-1);
}
