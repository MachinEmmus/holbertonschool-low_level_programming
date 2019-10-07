#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, c, j, d;
int Countd, Countj;
Countd = 0;
Countj = 0;
	for (i = 0; i < 1000; i++)
	{
		c = i / 100;
		j = ((i % 100) / 10);
		d = ((i % 100) % 10);
	if (d == 9 && j != 8 && c != 7)
	{
		Countd += 1;
		Countj += 1; 
	}
	if (d > Countd && j > Countj)
	{
		putchar(c + '0');
		putchar(j + '0');
		putchar(d + '0');
		if (i != 789)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}

