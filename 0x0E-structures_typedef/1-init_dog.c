#include "dog.h"
#include <stdio.h>
/**
 * struct dog - My Dog Structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: I have some characteristics of my structure dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

