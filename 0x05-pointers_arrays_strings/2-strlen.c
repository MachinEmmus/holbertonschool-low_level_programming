/**
 * _strlen - count size of a String
 * @s: is a parametre
 * Return: 0
 */

int _strlen(char *s)
{
int size = 0;
	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}
