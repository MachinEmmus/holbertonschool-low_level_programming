#include <stdio.h>
#include <stdlib.h>
/**
 * main - funtion
 * @argc: int valur
 * @argv: variable
 * Return: 0 success or 1 error
 */

int main(int argc, char *argv[])
{
int i = 0;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
		return (0);
}
