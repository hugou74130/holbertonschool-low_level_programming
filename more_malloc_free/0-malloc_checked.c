#include <stdlib.h>
#include "main.h"
void *malloc_checked(unsigned int b)
{
	int *i;
	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (98);
}
