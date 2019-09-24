#include "holberton.h"
/**
 * print_sign - Check if a number is greater than 0
 * @n: The number to be checked
 *
 * Return: 1,+ if the number is greath than 0. 0 otherwise
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
