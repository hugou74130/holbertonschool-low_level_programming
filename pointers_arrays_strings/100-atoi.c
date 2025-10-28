#include "main.h"
#include <limits.h>

int _atoi(char *s)
{
	int i = 0;
	int signe = 1;
	unsigned int nb = 0;

	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			signe *= -1;
		i++;
	}
	if (s[i] < '0' || s[i] > '9')
		return (0);

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (nb > (unsigned int)INT_MAX / 10)
		{
			return (signe == 1) ? INT_MAX : INT_MIN;
		}

		nb = nb * 10 + (s[i] - '0');

		if (signe == 1 && nb > (unsigned int)INT_MAX)
			return INT_MAX;
		if (signe == -1 && nb > (unsigned int)INT_MAX + 1)
			return INT_MIN;

		i++;
	}

	/* Conversion finale sécurisée */
	if (signe == -1)
		return -(int)(unsigned int)nb; /* Cast explicite vers unsigned avant négation */
	return (int)nb;
}
