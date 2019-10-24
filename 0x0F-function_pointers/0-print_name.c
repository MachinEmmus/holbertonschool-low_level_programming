#include "stdio.h"

/**
 * print_name - Print name of a Person
 * @name: Name of the person
 * @f: My funtion to print
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
