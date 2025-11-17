#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)

		return;

	f(name);
}
