#include "holberton.h"
/**
 * times_table - writes the character c to stdout
 */
void times_table(void)
{
int x = 0, y = 0, z;
for (; x <= 9; x++)
{
for (; y <= 9; y++)
{
z = x * y;
if (z < 10)
{
if (y > 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar(z + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(z / 10 + '0');
_putchar(z % 10 + '0');
}
}
_putchar('\n');
}
}
