#include "holberton.h"

/**
 * get_endianness - find endianness type
 * Return: Big o little
 */

int get_endianness(void)
{
int i = 1;
char *str = (char *)&i;
	if (*str)
		return (1);
	else
		return (0);
}
