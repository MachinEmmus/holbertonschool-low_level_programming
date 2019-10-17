#include <stdlib.h>
/**
* argstostr - returns a pointer to a 2 dimensional array of integers.
* @ac: the withdh parameter
* @av: the height parameter
* Return: a bidimentional array
*/

char *argstostr(int ac, char **av)
{
	int i, k = 0, j, c = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			c++;
			j++;
		}
		j = 0;
	}
	j = 0;
	p = malloc(c * sizeof(char) + ac + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			*(p + k) = av[i][j];
			j++;
			k++;
		}
		*(p + k) = '\n';
		j = 0;
		k++;
	}
	*(p + k) = '\0';
	return (p);
}
