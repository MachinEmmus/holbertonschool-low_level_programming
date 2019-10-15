#include <stdlib.h>
/**
 * *create_array - create array with size, and char specific
 * @size: Is 98
 * @c: char
 * Return: char of pointer
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *p;
	if (size == 0)
		return (NULL);
	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(p + i) = c;
	return (p);
}
