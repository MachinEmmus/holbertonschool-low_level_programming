#include "holberton.h"

/**
 * print_diagonal - print a diagonal space
 * @n: longitud of line
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
	_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}

