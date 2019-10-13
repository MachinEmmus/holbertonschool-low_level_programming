/**
 * *_strcat - Funtion thats return to char
 * @dest: "Hello ";
 * @src: "World!"
 * Return: Char value of the String
 */

char *_strcat(char *dest, char *src)
{
int a = 0;
int b = 0;
	while (*(dest + a) != '\0')
		a++;
	while (b <= a && src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}
