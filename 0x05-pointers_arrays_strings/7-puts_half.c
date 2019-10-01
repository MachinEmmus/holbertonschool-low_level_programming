#include "holberton.h"
/**
 * puts_half - print medium string
 * @str: char pass for parametrer
 * Return: void
 */

void puts_half(char *str)
{
int x;
int n;
x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	if (x % 2 == 0)
		n = (x / 2);
	else
		n = ((x - 1) / 2);
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}

