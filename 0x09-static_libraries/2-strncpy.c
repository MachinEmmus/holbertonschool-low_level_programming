#include "holberton.h"
/**
 * *_strncpy - copy a string 
 * @dest: string
 * @src:  
 * @n: value to print
 * Return: dest
 */

char *_strncpy(char *dest, char *src,  int n)
{
int i;
	while (*(dest + i) != '\0')
		i++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	
}
