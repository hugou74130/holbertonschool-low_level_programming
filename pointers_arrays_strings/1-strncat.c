#include "main.h"

/**
 * _strncat - Concatenates two strings with a limit
 * @dest: The destination string
 * @src: The source string to append
 * @n: Maximum number of bytes to use from src
 *
 * Description: This function appends at most n bytes from the src string
 * to the dest string, overwriting the terminating null byte at the end
 * of dest, and then adds a terminating null byte.
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')

	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
