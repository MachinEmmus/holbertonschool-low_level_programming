#include "holberton.h"

/**
 * print_most_numbers - print numbers distint 2y4
 * Return: void
 */

void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
	if (i != 2 && i != 4)
		_putchar('0' + i);
}
_putchar('\n');
}
