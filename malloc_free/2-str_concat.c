#include <stdlib.h>
#include <string.h>
#include "main.h"

char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *result;

	len1 = 0;
	if (s1)
	{
		while (s1[len1])

			len1++;
	}
	len2 = 0;
	if (s2)
	{
		while (s2[len2])

			len2++;
	}

	result = malloc(len1 + len2 + 1);
	if (result == NULL)

		return (NULL);

	if (s1)
		strcpy(result, s1);

	else
		result[0] = '\0';

	if (s2)
		strcat(result, s2);
	return (result);
}
