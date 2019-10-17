#include <stdlib.h>
/**
 * malloc_checked - assigment memory
 * @b: is a value assigment memory
 * @Return: void 
 */

void *malloc_checked(unsigned int b)
{
int *p;
	p = malloc(b);
		if (p == NULL)
			exit(98);
	return (p);
}
