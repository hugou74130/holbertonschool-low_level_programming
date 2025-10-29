#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string to append
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte at the end of dest, and then
 * adds a terminating null byte.
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];

		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
