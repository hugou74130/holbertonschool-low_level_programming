#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int total;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;

	arr = malloc(total);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		arr[i] = 0;

	return ((void *)arr);
}
