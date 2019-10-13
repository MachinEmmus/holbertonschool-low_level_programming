#include "holberton.h"
/**
 * *_memset - fill memory with a constant byte
 * @s: Pointer of memory area
 * @b: Byte Constant
 * @n: Number of byte constant
 * Return: A Char in this scope
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
