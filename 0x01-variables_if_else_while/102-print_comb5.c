#include <stdio.h>
/**
 * 
 *
 *
 */

int main(void)
{
unsigned int x, y;
	for (x = 0; x < 10; x++)
	{
		for (y = 1; y < 100; y++)
		{
			putchar(x + '0');
			putchar(x + '0');
			putchar(' ');
			putchar(x + '0');
			putchar(y + '0');
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
