#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Description: This function converts a string to an integer, handling
 * multiple signs before the number. It supports overflow detection and
 * returns INT_MAX or INT_MIN when the number exceeds integer limits.
 *
 * Return: The converted integer value, or 0 if no valid number is found,
 *         INT_MAX if positive overflow occurs, INT_MIN if negative overflow
 */

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
			return ((signe == 1) ? INT_MAX : INT_MIN);
		}

		nb = nb * 10 + (s[i] - '0');

		if (signe == 1 && nb > (unsigned int)INT_MAX)
			return (INT_MAX);
		if (signe == -1 && nb > (unsigned int)INT_MAX + 1)
			return (INT_MIN);

		i++;
	}

	/* Conversion finale sans négation directe */
	if (signe == -1)
		return ((int)(-nb));
	return ((int)nb);
}
