#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void puts_half(char *str)
{
	int len = 0, i, start;

	/* Find the length of the string */
	while (str[len] != '\0')
		len++;

	/* Determine the starting index for printing half */
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	/* Print the second half of the string */
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
