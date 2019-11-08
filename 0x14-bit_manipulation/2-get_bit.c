#include "holberton.h"
/**
 * print_binary - convert decimal to binary
 * @n: is my decimal number
 * Return: number in binary
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1)
	if (n & 1)
		printf("1");
	else
		printf("0");
}
