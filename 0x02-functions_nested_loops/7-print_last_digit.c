#include "holberton.h"
/**
 * _abs - Check if a number is lowerr than 0
 * @x: The number to be checked
 *
 * Return: x if the number is abs.
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
