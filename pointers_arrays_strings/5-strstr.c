#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to find
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned i = 0;
	unsigned j = 0;

	if (needle[0] == '\0')
		return haystack;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
			i++;

		if (needle[j] == '\0')

			return (&haystack[i]);

		i++;
	}
	return (NULL);
}
