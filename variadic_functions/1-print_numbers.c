#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list args;
	unsigned int i;
	int result;

	if (n == 0)

		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
		result += va_arg(args, int);
	printf("%d %s", n, separator);

	return (0);
}
