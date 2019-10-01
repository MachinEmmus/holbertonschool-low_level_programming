#include "holberton.h"
/**
 * puts_half - print medium string
 * @str: char pass for parametrer
 * Return: void
 */

void puts2(char *str)
{
int x;
int n;
x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	x--;
	if (x % 2 == 0)
	{	
		for (n = x; n >= x/2; n--)
			_putchar(str[n]);
	}
	else 
	{
		x--;
		for (n = x; n >= x/2; n--)
	     	_putchar(str[n]);
	}
	_putchar('\n');
}

