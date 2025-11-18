#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);

		if (separator == NULL)

			if (n == NULL)
				printf("nil");
	}
	printf("%s", num);
}
