#include "main.h"

/**
 * read_textfile - reads a text file and prints to stdout
 * @filename: name of the file to be read
 * @letters: no of letters to be printed and read
 *
 * Return: letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t num = 0;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	num = read(fd, buffer, letters);
	if (num == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	buffer[num] = '\0';
	if (write(STDOUT_FILENO, buffer, num))
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (num);
}
