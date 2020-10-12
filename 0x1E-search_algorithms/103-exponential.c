#include "search_algos.h"
/**
 * exponential_search - searches sorted array
 * @array: is a pointer
 * @size: elements in array
 * @valu value to search
 * Return: -1 
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, left = 0, right = 0, mid = 0;

	if (array == NULL || size == 0)
		return (-1);

	for (; i < size && array[i] < value; i *= 2)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		left = i;
	}

	i = i < size - 1 ? i : size - 1;
	right = i;
	printf("Value found between indexes [%ld] and [%ld]\n", left, i);

	/* ----- binary search ----*/
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = (left + right) / 2;
		/* if value is greater go to the right of middle*/
		if (array[mid] < value)
			left = mid + 1;
		/* if value is smaller go to the left of middle*/
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
