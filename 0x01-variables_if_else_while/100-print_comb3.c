#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, c, j;
int Count;
Count = 0;
	for (i = 0; i < 100; i++)
	{
		c = i / 10;
		j = i % 10;
	if (j == 9 && c != 8)
		Count += 1;
	if (j > Count)
	{
		putchar(c + '0');
		putchar(j + '0');
		if (i != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}
