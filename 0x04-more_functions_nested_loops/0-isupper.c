#include "holberton.h"

/**
 * _isupper - Check if a number is greater than 0
 * @c: The number to be checked
 *
 * Return: 1 if the letter is uppercase. 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
