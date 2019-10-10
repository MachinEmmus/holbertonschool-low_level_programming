#include "holberton.h"
/**
 * _strlen_recursion - This funtions is very recursive
 * @s: parametrer
 * Return: int;
 */
int _strlen_recursion(char *s)
{
int x;
x = 0;
	if (*s)
	{
		s++;
		x++;
		x = x + _strlen_recursion(s);
	}
	return (x);
}
