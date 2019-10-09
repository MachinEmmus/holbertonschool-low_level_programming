#include "holberton.h"
/**
 *
 *
 *
 */
int _strlen_recursion(char *s)
{
int x;
	if(s)
	{
		s++;
		x = 0 + _strlen_recursion(s);
	}
	return (x);
}
