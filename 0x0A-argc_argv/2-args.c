#include <stdio.h>
/**
 * main - Funtion
 * @argc: int value
 * @argv: variable
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
