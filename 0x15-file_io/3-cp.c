#include "main.h"

#define BUFF_SIZE 1024

/**
 * error_msg - displays error message
 * @message: message string to be displayed
 * @arg: arguments passed
 *
 * Return: void
 */
void error_msg(char *message, char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
}

/**
 * main - entry point
 * @argc: number of arguments passed
 * @argv: arguments passed
 *
 * Exit: exit success
 */
int main(int argc, char *argv)
{
	int fd_prev, fd_new, read_byte, written_byte;
	char buffer[BUFF_SIZE];

	if (argc != 3) {
		error_msg("Usage: %s file_from file_to\n", argv[0]);
		error(97);
	}
	fd_prev = open(argv[1], O_RDONLY);
	if (fd_prev == -1) {
		error_msg("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_new = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_new == -1) {
		error_msg("Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	read_byte = read(fd_prev, buffer, BUFF_SIZE);
	while (read_byte > 0) {
		written_byte = write(fd_new, buffer, read_byte);
		if (written_byte != read_byte) {
			error_msg("Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (read_byte == -1) {
		error_msg("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_prev) == -1) {
		error_msg("Error: Can't close fd %d\n", fd_prev);
		exit(100);
	}
	if (close(fd_new) == -1) {
		error_msg("Error: Can't close fd %d\n", fd_new);
		exit(100);
	}
	return (0);
}
