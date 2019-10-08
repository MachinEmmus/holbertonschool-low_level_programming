#include "holberton.h"
/**
 * *_strchr - Find a charter in string
 * @s: Is the String
 * @c: charter to find
 * Return: A char find or NULL
 */

char *_strchr(char *s, char c)
{
unsigned int x;
x = 0;
	while (s[x] != '\0')
	{
		if (s[x] == c)
			return (s + x);
		x++;
	}
	if (s[x] == c)
		return (s + x);
	return ('\0');

}
