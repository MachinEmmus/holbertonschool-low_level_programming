#include <stdio.h>

/**
 * print_array - is the most important
 * @a: value array
 * @n: ...
 */

void print_array(int *a, int n)
{
int x;
	for (x = 0; x < n; x++)
	{
		if (x == (n - 1))
			printf("%d", a[x]);
		else
			printf("%d, ", a[x]);
	}
	printf("\n");
}
