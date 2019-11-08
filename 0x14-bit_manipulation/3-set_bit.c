#include "holberton.h"
/**
 * set_bit - set index value
 * @n: pointer to unsigned int
 * @index: index value 
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	i <<= index;
	*n = *n | i;
	return (1);
}
