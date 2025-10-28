#include "main.h"
#include <stdio.h>
#include <limits.h>

int _atoi(char *s)
{
	int i = 0;
	int signe = 1;
	int nb = 0;

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
		int digit = s[i] - '0';
		if (signe == 1)
		{
			if (nb > (INT_MAX - digit) / 10)
				return INT_MAX;
		}
		else
		{
			if (nb > (-(INT_MIN + digit)) / 10)
				return INT_MIN;
			nb = nb * 10 + digit;
			i++;
		}

		return nb * signe;
	}
}
