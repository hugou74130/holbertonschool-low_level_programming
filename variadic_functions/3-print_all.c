#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print_all(const char *const format, ...)
{
	va_list args;
	char c;
	int i;
	int f;
	char *s;

	va_start(args, format);
	i = 0;
	f = 0;
	while (format && format[i])
	{
		c = format[i];
		if (f && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
			printf(", ");
		switch (c)
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
