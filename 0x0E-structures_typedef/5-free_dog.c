#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Liberar a los perros
 * @d: Pointer to my structure dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d);
		free(d->owned->owner);
	}
}
