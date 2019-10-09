#include <stdio.h>
/**
 * print_diagsums - print sum of diagonals
 * @a: Matriz bidimensional
 * @size: size of the Matriz
 * Return: Void
 */

void print_diagsums(int *a, int size)
{
int rows, columns, Sum1, Sum2, x;
rows = 0;
columns = 0;
	for (x = 0; x < (size * size); x++)
	{
		if (columns == size)
		{
			columns = 0;
			rows++;
		}
		if (columns == rows)
			Sum1 += *(a + x);
		if ((rows + columns) == (size - 1))
			Sum2 += *(a + x);
		columns++;
	}
	printf("%d, %d\n", Sum1, Sum2);
}
