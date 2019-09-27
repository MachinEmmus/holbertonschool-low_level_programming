#include <stdio.h>

/**
 * main - print num 1 to 100
 *
 * Return: 0
 */

int main(void)
{
int i;
printf("1");
for (i = 2; i <= 100; i++)
{
	if ((i % 5) == 0 && (i % 3) == 0)
	{
		printf(" FizzBuzz");
	}
	else if (i % 3 == 0)
	{
		printf(" Fizz");
	}
	else if (i % 5 == 0)
	{
		printf(" Buzz");
	}
	else
	{
		printf(" %i", i);
	}
}	
printf("\n");
return (0);

}
