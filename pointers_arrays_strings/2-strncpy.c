#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	{
		while (i < n && src[i] != '\0')

			i++;
	}
	while (i < n)
		dest[i] = '\0';
	i++;
	{
		return (dest);
	}
}
