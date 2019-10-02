#include <stdio.h>
/**
 * rev_string - string invert
 * @s: is a string
 * Return: void
 */

void rev_string(char *s)
{
int x, y, z;
x = 0;
char orden, desorden;
	while (s[x] != '\0')
		x++;
	x--;
	z = x / 2;
	for (y = 0; x > z; x--)
	{
		orden = s[x];
		desorden = s[y];
		s[y] = orden;
		s[x] = desorden;
		y++;

	}
}
