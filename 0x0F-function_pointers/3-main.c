#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main functions
 * @argc: count argc
 * @argv: Matriz of arg
 * Return: zero or exit function
 */

int main(int argc, char *argv[])
{
char *count;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	count = argv[2];
	if ((*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' &&
		*argv[2] != '/' && *argv[2] != '%') || *(count + 1) != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

