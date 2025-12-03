#include "main.h"

/**
 * main - Copies one file to another
 * @argc: Number of arguments
 * @argv: Argument values
 *
 * Return: 0 on success, error code on failure
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	mode_t old_umask;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(EXIT_USAGE);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(EXIT_READ_ERROR);
	}

	old_umask = umask(0);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	umask(old_umask);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(EXIT_WRITE_ERROR);
	}

	while (1)
	{
		bytes_read = read(fd_from, buffer, BUFFER_SIZE);

		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(EXIT_READ_ERROR);
		}

		if (bytes_read == 0)
			break;

		bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(EXIT_WRITE_ERROR);
		}
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(EXIT_CLOSE_ERROR);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(EXIT_CLOSE_ERROR);
	}

	return (0);
}
