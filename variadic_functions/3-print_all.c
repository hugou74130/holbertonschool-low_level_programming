#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print_all(const char *const format, ...)
{

	va_list args;
	unsigned int i;
	char *str;

	va_start(args, format);
	for (i = 0; i < format; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < format - 1 && format != NULL)

			printf("%s", format);
	}
	va_end(args);
	printf("\n");
}
