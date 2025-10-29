#include "main.h"

int _strcmp(char *s1, char *si2)
{
	int i = 0;
	while (s1[i] != '\0' && si2[i] != '\0')
	{
		if (s1[i] != si2[i])
			i++;
	}
	return (s1[i] - si2[i]);
}
