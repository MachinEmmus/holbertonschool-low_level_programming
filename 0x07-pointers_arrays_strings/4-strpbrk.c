#include "holberton.h"
/**
 * _strpbrk - search
 * @s: string initial
 * @accept: string muestra
 * Return: pointer s or null
 */
char *_strpbrk(char *s, char *accept)
{
int a, b;
a = 0;
b = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (s + a);
		}
	}
	return ('\0');
}
