#include "main.h"

/**
 * main - Copies the content of one file to another file.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Description:
 * This program copies the content of a file (file_from)
 * to another file (file_to). It handles errors such as:
 * incorrect argument count, read failure, write failure,
 * and file descriptor closure failure.
 *
 * Return: 0 on success, or exits with the appropriate code:
 * 97 - incorrect usage
 * 98 - read error
 * 99 - write error
 * 100 - close error
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, c1, c2;
	ssize_t r, w;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}

	while ((r = read(fd_from, buffer, 1024)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}

	c1 = close(fd_from);
	if (c1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	c2 = close(fd_to);
	if (c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
