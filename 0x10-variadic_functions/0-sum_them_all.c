#include <stdarg.h>

/**
 * sum_them_all - suma indefine arg
 * @n: number of arg
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list turbina;
unsigned int i;
int sum = 0;

	if (n == 0)
		return (0);
	va_start(turbina, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(turbina, int);
	va_end(turbina);
	return (sum);
}
