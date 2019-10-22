#include "dog.h"
#include <stdlib.h>
/**
* *new_dog - create new dog
* @name: name of dog
* @age: age
* @owner: owner of dog.
* Return: new_dog estructur
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int size1 = 0, size2 = 0, x;
	dog_t *snopp;

	if (name != NULL && owner != NULL)
	{
		while (*(name + size1))
			size1++;
		while (*(owner + size2))
			size2++;
		snopp = malloc(sizeof(dog_t));
		if (snopp == NULL)
			return (NULL);
		(*snopp).name = malloc(size1 + 1);
		if ((*snopp).name == NULL)
		{
			free(snopp);
			return (NULL);
		}
		(*snopp).owner = malloc(size2 + 1);
		if ((*snopp).owner == NULL)
		{
			free((*snopp).name);
			free(snopp);
			return (NULL);
		}
		for (x = 0; x <= size1; x++)
			(*snopp).name[x] = name[x];
		(*snopp).age = age;
		for (x = 0; x <= size2; x++)
			(*snopp).owner[x] = owner[x];
		return (snopp);
	}
	return (NULL);
}
