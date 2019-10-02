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
char i, j;
	while (s[x] != '\0')
		x++;
	x--;
	z = x / 2;
	for (y = 0; x > z; x--)
	{
		i = s[x];
		j = s[y];
		s[y] = i;
		s[x] = j;
		y++;

	}
}
