#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - count string
 * @str: input string
 * Return: string length unsigned integer
 */
unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (*(str + i) != '\0')
		i++;
	return (i);
}
/**
 * _strcpy - copies string
 * @new: pointer to new string
 * @from: pointer to string to copy
 * Return: void
 */
void _strcpy(char *new, char *from)
{
	unsigned int i, len = _strlen(from);

	for (i = 0; i <= len; i++)
		new[i] = from[i];
}
/**
 * new_dog - creates new dog type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to the type of struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_size = _strlen(name), owner_size = _strlen(owner);
	dog_t *snoop;

	snoop = malloc(sizeof(dog_t));
	if (snoop)
	{
		snoop->name = malloc(sizeof(char) * (name_size + 1));
		if (snoop->name)
		{
			snoop->owner = malloc(sizeof(char) * (owner_size + 1));
			if (snoop->owner)
			{
				_strcpy(snoop->name, name);
				snoop->age = age;
				_strcpy(snoop->owner, owner);
				return (snoop);
			}
			else
			{
				free(snoop->name);
				free(snoop);
			}
		}
		else
			free(snoop);
	}
	return (NULL);
}
