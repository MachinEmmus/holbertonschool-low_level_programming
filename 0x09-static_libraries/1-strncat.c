/**
 * *_strncat - Funtion thats return to char
 * @dest: "Hello ";
 * @src: "World!"
 * @n: number to print
 * Return: Char value of the String
 */

char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int b = 0;
	while (*(dest + a) != '\0')
		a++;
	while (b <= a && src[b] != src[n])
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}
