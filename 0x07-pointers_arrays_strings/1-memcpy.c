#include "holberton.h"
/**
 * *_memcpy - Copy memory area
 * @dest: Pointer of memory area
 * @src: Byte Constant
 * @n: Number of byte constant
 * Return: A Char in this scope
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
int x = 0;
	for (i = *dest ; i < ((n - 1) + *dest); i++)
	{
		dest[i] = *(src + x);
		x += 1;
	}
	return (dest);
}
