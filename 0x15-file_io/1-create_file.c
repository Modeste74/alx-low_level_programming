#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to be created
 * @text_content: string to be written in the file
 *
 * Return: 1 if success otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, size, written_byte;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		size = strlen(text_content);
		written_byte = write(fd, text_content, size);
		if (written_byte == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
