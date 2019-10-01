#include "holberton.h"
/**
 * rev_string - string invert
 * @s: is a string
 * Return: void
 */

void rev_string(char *s)
{
int x;
	for (x = 10; x >= 0; x--)
	{
		*s = *s[x];
	}
	_putchar('\n');
}
