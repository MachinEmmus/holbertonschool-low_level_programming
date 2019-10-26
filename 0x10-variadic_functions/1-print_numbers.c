#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: ...
 * @n: how many numbers!
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
	
	if (!separator)
	{
		
	}
	else
	{
		va_start(list, n);
		for (i = 0; i < n; i++)
		{
			printf("%d",va_arg(list, int));
			if (i < (n - 1))
				printf("%s", separator);
		}
		printf("\n");
		va_end(list);
	}
}
