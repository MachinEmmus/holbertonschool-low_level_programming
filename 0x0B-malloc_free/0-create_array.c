#include <stdlib.h>
/**
 * 
 *
 *
 *
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
	if (size == 0)
		return (NULL); 
	char *p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(p + i) = c; 
	return (p);
}
