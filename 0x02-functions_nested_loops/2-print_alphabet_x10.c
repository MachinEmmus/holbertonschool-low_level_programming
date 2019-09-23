#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i = 0;  
char x;
while (i < 10)
{  
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
i++;
}
}
