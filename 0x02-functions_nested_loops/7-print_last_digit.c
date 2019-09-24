#include "holberton.h"
/**
 * print_last_digit - Check the last digit of the number
 * @x: The number to be checked
 *
 * Return: x if the last digit.
 */

int print_last_digit(int x)
{
x = x % 10;
if (x < 0)
{
x = x * -1;
}
_putchar('0' + x);
return (x);
}
