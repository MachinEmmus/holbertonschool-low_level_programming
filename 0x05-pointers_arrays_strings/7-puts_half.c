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
	{	
		for (n = x/2; n <= x ; n++)
			_putchar(str[n]);
	}
	else 
	{
		x--;
		for (n = x/2; n <= x; n++)
	     	_putchar(str[n]);
	}
	_putchar('\n');
}

