#include "holberton.h"
/**
 * times_tables - print nine tables
 */

void times_tables(void)
{
int x, y, z, a, b;
x = 0;
z = x;
while (x < 10)
{
_putchar(48);
for (y = 0; b < 9; y++)
{
if (c < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + z);
}
else 
{
a = z / 10;
b = z % 10;  
_putchar(',');
_putchar(' ');
_putchar('0' + a);
_putchar('0' + b);
}
z = z + a;
}
_putchar('\n');
z++;
c = a; 
} 
}
