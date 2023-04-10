#include "main.h"

/**
 * append_text_to_file - appends new text to the end of file
 * @filename: name of file to appended
 * @text_content: text string string to append to file
 *
 * Return: 1 if success and -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int size, fd, written_byte;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
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
