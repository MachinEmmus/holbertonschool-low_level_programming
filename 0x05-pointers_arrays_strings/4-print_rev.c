#include "holberton.h"

/**
 * print_rev - print a string in reverse
 * @s: String to  print
 * Return: ...
 */

void print_rev(char *s)
{
	int x;
	int size;
	while (s[size] != '\0')
	{	
		size++;
	}
	for (x = size; x >= 0; x--)
	{	
		_putchar(s[x]);
	}
	_putchar('\n');
}

