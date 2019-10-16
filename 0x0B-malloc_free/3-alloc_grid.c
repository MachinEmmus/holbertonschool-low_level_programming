#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - Dimensional array integer
 * @width: Parametrer
 * @height: Parametrer
 * Return: Bidimensional Array
 */

int **alloc_grid(int width, int height)
{
int i, m, j, c;
int **p;
	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(p + i) = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(p[j]);
			}
			free(p);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (c = 0; c < width; c++)
		{
			p[m][c] = 0;
		}
	}
	return (p);
}

