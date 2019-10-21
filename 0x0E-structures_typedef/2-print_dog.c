#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Print Dogs register
 * @d: structure dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name == NULL ? "(nill)" : (*d).name);
		printf("Name: %.6f\n", d->age );
		printf("Name: %s\n", d->owner == NULL ? "(nill)" : (*d).owner);
	}

}
