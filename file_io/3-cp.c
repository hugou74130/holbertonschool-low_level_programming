#include "main.h"

/**
 * main - Copies the content of file_from to file_to
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Description:
 * This program copies the content of one file to another file.
 * It reads 1024 bytes at a time from the source file and writes
 * to the destination file. The destination file is truncated if
 * it already exists, and created with permissions rw-rw-r-- if new.
 *
 * Usage: ./cp file_from file_to
 *
 * Exit codes:
 * - 97: Incorrect number of arguments
 * - 98: Cannot read from source file
 * - 99: Cannot write to destination file
 * - 100: Cannot close file descriptor
 * - 0: Success
 *
 * Return: 0 on success, appropriate error code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	mode_t old_umask;

	/* Check if correct number of arguments */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(EXIT_USAGE);
	}

	/* Open source file for reading */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(EXIT_READ_ERROR);
	}

	/* Set umask to 0 temporarily to ensure permissions are 0664 */
	old_umask = umask(0);

	/* Open destination file for writing, create if doesn't exist, truncate if exists */
	/* O_WRONLY: Write only */
	/* O_CREAT: Create file if it doesn't exist */
	/* O_TRUNC: Truncate file if it exists */
	/* 0664: rw-rw-r-- permissions */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	/* Restore old umask */
	umask(old_umask);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(EXIT_WRITE_ERROR);
	}

	/* Read and write in chunks of 1024 bytes */
	while (1)
	{
		/* Read from source file */
		bytes_read = read(fd_from, buffer, BUFFER_SIZE);

		/* Check if read failed */
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(EXIT_READ_ERROR);
		}

		/* Break if end of file reached */
		if (bytes_read == 0)
			break;

		/* Write to destination file */
		bytes_written = write(fd_to, buffer, bytes_read);

		/* Check if write failed or incomplete */
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(EXIT_WRITE_ERROR);
		}
	}

	/* Close source file */
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(EXIT_CLOSE_ERROR);
	}

	/* Close destination file */
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(EXIT_CLOSE_ERROR);
	}

	return (0);
}
