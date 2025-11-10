#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates a character array and initializes it
 * with a specific character.
 * @size: The size of the array to create (unsigned int)
 * @c: The character used for initialization
 *
 * Return: A pointer to the allocated array, or NULL if size is 0
 * or if memory allocation fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
