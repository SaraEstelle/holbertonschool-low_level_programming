#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * close_file - Closes a file descriptor and handles errors.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * error_read - Prints error message for read failure and exits.
 * @file: Name of the file causing the error.
 * @fd_from: File descriptor of source (to be closed).
 * @fd_to: File descriptor of dest (to be closed), or -1.
 */
void error_read(char *file, int fd_from, int fd_to)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	if (fd_from != -1)
		close_file(fd_from);
	if (fd_to != -1)
		close_file(fd_to);
	exit(98);
}

/**
 * error_write - Prints error message for write failure and exits.
 * @file: Name of the file causing the error.
 * @fd_from: File descriptor of source (to be closed).
 * @fd_to: File descriptor of dest (to be closed).
 */
void error_write(char *file, int fd_from, int fd_to)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	if (fd_from != -1)
		close_file(fd_from);
	if (fd_to != -1)
		close_file(fd_to);
	exit(99);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int from, to;
	ssize_t r, w;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	if (from == -1)
		error_read(argv[1], -1, -1);

	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
		error_write(argv[2], from, -1);

	while ((r = read(from, buffer, 1024)) > 0)
	{
		w = write(to, buffer, r);
		if (w == -1 || w != r)
			error_write(argv[2], from, to);
	}

	if (r == -1)
		error_read(argv[1], from, to);

	close_file(from);
	close_file(to);

	return (0);
}
