#include "holberton.h"

/**
 * print_most_numbers - print numbers between 1-9 <> 2 && 4
*/

void print_most_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar('0' + i);
	}
	_putchar('\n');
}
