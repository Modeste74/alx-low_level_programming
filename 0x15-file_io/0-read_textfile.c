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
	ssize_t num, written_size;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
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
	written_size = write(STDOUT_FILENO, buffer, num);
	if (written_size == -1 || written_size != num)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (num);
}
