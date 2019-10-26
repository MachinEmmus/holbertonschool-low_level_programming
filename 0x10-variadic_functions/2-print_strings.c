#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print to function
 * @separator: ...
 * @n: the number of parametres
 * Return: void;
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list arg1;
unsigned int i;
char *p;

	va_start(arg1, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(arg1, char *);
		if (p)
			printf("%s", p);
		else
			printf("(nil)");
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg1);
}

