#include "main.h"

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
