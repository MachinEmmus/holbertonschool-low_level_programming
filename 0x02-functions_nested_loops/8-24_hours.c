#include "holberton.h"
/**
 * jack_bauer - print hours
 */

void jack_bauer(void)
{
char z, b, c, v, x;
for (z = 48; z < 51; z++)
{
if (z == 50)
{
x = 52;
}
else
{
x = 58;
}
for (b = 48; b < x; b++)
{
for (c = 48; c < 54; c++)
{
for (v = 48; v < 58; v++)
{
_putchar(z);
_putchar(b);
_putchar(':');
_putchar(c);
_putchar(v);
_putchar('\n');
}
}
}
}
}
