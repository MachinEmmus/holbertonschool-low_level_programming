#include "holberton.h"
/**
 * create_file - create a new file
 * @filename: name of the new file
 * @text_content: content in the file
 * Return: 1 on success or -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int size;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (close(fd) == -1 ? -1 : 1);
	size = _strlen(text_content);
	if (write(fd, text_content, size) != size)
	{
		close(fd);
		return (-1);
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}

/**
 * _strlen - Size of the String
 * @s: String to count
 * Return: Number of characters
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
