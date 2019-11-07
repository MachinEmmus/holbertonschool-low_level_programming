#include "holberton.h"

/**
 * binary_to_uint - binary number convert to int
 * @b: String of = 0 & 1
 * Return: Number in decimal base
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int i = 0, sum = 0, Exp, j;
	if (b == NULL)
		return (0);
	while (*(b + i))
	{
		if (b[i] == '0' || b[i] == '1')
			Exp++, i++;
		else
			return (0);
	}
	Exp = i - 1;
	j = Exp;
	for (i = 0; i <= j; i++)
	{
		if (b[i] == '1')
			sum = sum + (1 << Exp);
		Exp--;
	}
	return (sum);
}
