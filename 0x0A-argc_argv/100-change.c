#include <stdio.h>
#include <stdlib.h>
/**
* main - funtion start
* @argc: int arguments.
* @argv: variable
* Return: 0 succes or 1 fail.
*/
int main(int argc, char *argv[])
{
int cents = 0, x;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	while (x > 0)
	{
		if (x >= 25)
			x = x - 25;
		else if (x >= 10)
			x = x - 10;
		else if (x >= 5)
			x = x - 5;
		else if (x >= 2)
			x = x - 2;
		else if (x >= 1)
			x = x - 1;
		cents++;
	}
	printf("%d\n", cents);
return (0);
}
