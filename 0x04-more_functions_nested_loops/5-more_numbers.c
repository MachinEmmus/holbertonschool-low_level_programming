#include "holberton.h"

/**
 * more_numbers - Numbers between 1-14 x10
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;
	for (i = 0; i < 10; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar('1');
			}	
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}
