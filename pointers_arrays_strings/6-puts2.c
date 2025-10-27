#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void puts2(char *str)
{
	int len = 0, i;

	/* Find the length of the string */
	while (str[len] != '\0')
		len++;
	/* Print every second character */
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
}
