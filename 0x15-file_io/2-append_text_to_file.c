#include "holberton.h"
/**
 * append_text_to_file - ...
 * @filename: name of the file append
 * @text_content: text to be append
 * Return: 1 on success or -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int size;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (close(fd) == -1 ? -1 : 1);
	size = _strlen(text_content);
	if (write(fd, text_content, size) == -1)
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

