#include "holberton.h"

/**
 * read_textfile - read a textfile
 * @letters: Number of the letters
 * @filename: Name of the file
 * Return: Characters print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, size;
char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	if (read(fd, buffer, letters) == -1)
	{
		free(buffer);
		return (0);
	}
	size = _strlen(buffer);
	size = write(STDOUT_FILENO, buffer, size);
	if (size == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	if (close(fd) == -1)
		return (-1);
	return (size);
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
