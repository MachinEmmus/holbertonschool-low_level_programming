#include "holberton.h"
/**
 * _strspn - string length 
 * @s: # bytes initial
 * @accept: Bytes
 * Return: Bytes of the segment initial
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int x, y;
x = 0;
y = 0;
	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				break;
			}
		}
		if (accept[y] == '\0')
			break;
	}
return (x);
}
