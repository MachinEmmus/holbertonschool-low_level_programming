#include <stdlib.h>
/**
  * _realloc - asignado memoria a strings
  * @ptr: String send me
  * @old_size: ...
  * @new_size: ...
  * Return: String new inizializated
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
unsigned int x, i;
	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
	{
		x = new_size;
	}
	else
	{
		x = old_size;
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	if (ptr == NULL)
		return (p);
	for (i = 0; i < x; i++)
		*(p + i) = *((char *)ptr + i);
	free(ptr);
	return (p);
}
