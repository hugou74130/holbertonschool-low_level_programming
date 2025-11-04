#include <stdio.h>
#include "main.h"

void _print_rev_recursion(char *s)
{
	if (*s == '\0')

		_putchar('\n');
	return;
	{
		_putchar(*s);
		_print_rev_recursion(*s - 1);
	}
}
