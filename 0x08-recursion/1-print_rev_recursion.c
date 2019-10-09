#include "holberton.h"
/**
 * _print_rev_recursion - print string in rev with recursion
 * @s: string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
char e;
	e = *s;
	if (*s)
	{
		s++;
		_print_rev_recursion(s);
		_putchar(e);
	}
	return;
}
