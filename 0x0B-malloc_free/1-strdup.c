#include <stdlib.h>
/**
 * *_strdup - duplicate of str string
 * @str: char to string
 * Return: char;
 */

char *_strdup(char *str)
{
int a, i;
char *p;
a = 0;
	if (str == NULL)
		return (NULL);
	while (str[a] != '\0')
		a++;
	a++;
	p = malloc(a * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= a; i++)
		*(str + i) = *(p + i);
	return (p);
}
