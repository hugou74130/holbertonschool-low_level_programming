#include "main.h"

#define BUFFER_SIZE 1024

/**
 * open_file - Opens a file and handles errors.
 * @filename: Name of the file.
 * @flags: Flags for opening the file.
 * @mode: Permissions if file is created.
 *
 * Return: File descriptor.
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		if (flags == O_RDONLY)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename), exit(98);

		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename), exit(99);
	}

	return (fd);
}

/**
 * copy_buffer - Copies the content of one file to another.
 * @fd_from: Source file descriptor.
 * @fd_to: Destination file descriptor.
 * @file_from: Source file name.
 * @file_to: Destination file name.
 */
void copy_buffer(int fd_from, int fd_to, const char *file_from, const char *file_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t r, w;

	while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
}

/**
 * main - Copies the content of a file to another file.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_file(argv[1], O_RDONLY, 0);
	fd_to = open_file(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	copy_buffer(fd_from, fd_to, argv[1], argv[2]);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
