#include <stdlib.h>
/**
 * *str_concat - Concatenute
 * @s1: First one String
 * @s2: Second String
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
int Sum, a = 0, b = 0;
int i, x = 0;
char *p;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	b++;
	Sum = a + b;
	p = malloc(Sum);
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= Sum; i++)
	{
		if (i > (a - 1))
		{
			*(p + i) = *(s2 + x);
			x++;
		}
		else
			*(p + i) = *(s1 + i);
	}
	return (p);
}
