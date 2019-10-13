/**
 * *_strcpy - funtion
 * @dest: first parametre
 * @src: First parametre
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int x, z;
x = 0;
	while (src[x] != '\0')
		x++;
	for (z = 0; z <= x; z++)
		dest[z] = src[z];
	return (dest);
}
