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
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
