#include "holberton.h"

/**
 * _puts - print a string
 * @str: String to  print
 * Return: 0 always
 */

void _puts(char *str)
{
int x = 0;
	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}


