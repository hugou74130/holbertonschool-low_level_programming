#include <stdlib.h>
#include <string.h>
#include "main.h"

char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *result;

	len1 = s1 ? strlen(s1) : 0;
	len2 = s2 ? strlen(s2) : 0;
	return (NULL);

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
