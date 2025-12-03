#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * close_fd - closes a file descriptor with error handling
 * @fd: file descriptor to close
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * error_read - prints read error and exits
 * @fd_from: source file descriptor to close
 * @fd_to: destination file descriptor to close (-1 if not open)
 * @filename: name of the file that caused the error
 */
void error_read(int fd_from, int fd_to, char *filename)
{
	if (fd_from != -1)
		close_fd(fd_from);
	if (fd_to != -1)
		close_fd(fd_to);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * error_write - prints write error and exits
 * @fd_from: source file descriptor to close
 * @fd_to: destination file descriptor to close (-1 if not open)
 * @filename: name of the file that caused the error
 */
void error_write(int fd_from, int fd_to, char *filename)
{
	if (fd_from != -1)
		close_fd(fd_from);
	if (fd_to != -1)
		close_fd(fd_to);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, exits with error code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_read(-1, -1, argv[1]);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_write(fd_from, -1, argv[2]);
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			error_write(fd_from, fd_to, argv[2]);
	}
	if (bytes_read == -1)
		error_read(fd_from, fd_to, argv[1]);
	close_fd(fd_from);
	close_fd(fd_to);
	return (0);
}
