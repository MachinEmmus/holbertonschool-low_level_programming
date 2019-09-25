#include <stdio.h>

/**
 * print_to_98 - print the number 98
 * @x: First operand
 *
*/
void print_to_98(int x)
{

if (x < 98)
{
for (; x <= 98; x++)
{
if (x == 98)
{
printf("%d", x);
}
else
printf("%d, ", x);
}
}
else
for (; x >= 98; x--)
{
if (x == 98)
{
printf("%d", n);
}
else
printf("%d, ", x);
}
printf("\n");
}
