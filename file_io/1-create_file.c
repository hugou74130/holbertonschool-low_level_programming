#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	/* Calculate length of text_content if not NULL */
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	/* Create file with rw------- (0600), truncate if exists */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* If text_content is not NULL, write it */
	if (text_content != NULL)
	{
		w = write(fd, text_content, len);
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
