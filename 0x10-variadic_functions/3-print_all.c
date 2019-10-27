#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * castChar - print a only char
 * @list: ...
 */
void castChar(va_list list)
{
	printf("%c", (char) va_arg(list, int));
}

/**
 * castInt - print a integer
 * @list: ...
 */
void castInt(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * castFloat - print a float number
 * @list: ...
 */
void castFloat(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * castString - print all characters
 * @list: My list
 */
void castString(va_list list)
{
	char *str = va_arg(list, char*);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - print somethings input
 * @format: Type of format
 * Return: void;
 */
void print_all(const char * const format, ...)
{
va_list valist;
int i = 0, k = 0;
char *wait = "";

	all_t Arr[] = {
			{'c', castChar},
			{'i', castInt},
			{'f', castFloat},
			{'s', castString}
	};

	va_start(valist, format);
	while (format[i] && format != NULL)
	{
		while (k < 4)
		{
			if (Arr[k].t == format[i])
			{
				printf("%s", wait);
				Arr[k].f(valist);
				wait = ", ";
			}
			k++;
		}
		k = 0;
		i++;
	}
	printf("\n");
	va_end(valist);
}
