#include <stdio.h>
/**
* main - funtion
* @argc: int value
* @argv: variable
* Return: Always 0 (Succes)
*/
int main(int argc, char *argv[])
{
argv[0] = argv[0];
printf("%d\n", argc - 1);
return (0);
}
