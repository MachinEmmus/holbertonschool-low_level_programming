#include <stdlib.h>
/**
 *
 *
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int i, a = 0, b = 0, sum = 0, x = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[b])
		b++;
	if (n >= b)
	{
		sum = a + b;
		p = malloc(sum);
			if (p == NULL)
				return (NULL);
	}
	sum = a + n;
	p = malloc(sum);
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= sum; i++)
	{
		if (i < a)
		{
			*(p + i) = s1[i];
		}
		else
		{
			*(p + i) = s2[x];
				x++;
		}
	}
	*(p + i) = '\0';
	return (p);
}

