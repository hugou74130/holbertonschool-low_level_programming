#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: Name of the file to append to
 * @text_content: NULL-terminated string to append to the file
 *
 * Description:
 * This function opens an existing file in append mode and writes the
 * provided text content to the end of the file. The file must exist
 * before calling this function. If text_content is NULL, the function
 * still returns 1 if the file exists and the caller has write permissions.
 *
 * Return: 1 on success, -1 on failure
 *
 * Error conditions:
 * - Returns -1 if filename is NULL
 * - Returns -1 if file does not exist
 * - Returns -1 if no write permissions on the file
 * - Returns -1 if file open operation fails
 * - Returns -1 if write operation fails
 * - Returns 1 if text_content is NULL but file exists and is writable
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;
	size_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	len = strlen(text_content);
	written = write(fd, text_content, len);

	close(fd);

	if (written == (ssize_t)len)
		return (1);

	return (-1);
}
