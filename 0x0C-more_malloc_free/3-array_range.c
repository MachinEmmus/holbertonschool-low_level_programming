#include <stdlib.h>
/**
 * array_range - a range inizializated
 * @min: Min Value
 * @max: Max Value
 * Return: int
 */
int *array_range(int min, int max)
{
int *p;
int a, c;
	if (min > max)
		return (NULL);
	a = (max - min) + 1;
	p = malloc(sizeof(*p) * a);
	if (p == NULL)
		return (NULL);
	*(p + 0) = min;
	for (c = 1; c < a; c++)
		*(p + c) = ++min;
	return (p);
}
