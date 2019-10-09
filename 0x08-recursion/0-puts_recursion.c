#include "holberton.h"
/**
 * _puts_recursion - A string print with recursion
 * @s: Is the string pointer
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
	s++;
	_puts_recursion(s);
	}
	else
		_putchar('\n');
	return;
}
