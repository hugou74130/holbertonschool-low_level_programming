#include "dog.h"

/**

new_dog - Creates a new dog structure with allocated memory
@name: Pointer to a string containing the dog's name
@age: Float representing the dog's age
@owner: Pointer to a string containing the owner's name

Description: Allocates memory for a new dog_t structure and duplicates
the name and owner strings. All strings are properly null-terminated.

Return: Pointer to the newly created dog_t structure on success.
NULL if any memory allocation fails.

Note: The caller is responsible for freeing the allocated memory
using free_dog() or manual memory management.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	unsigned int i;
	int len;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	len = 0;

	while (name[len])
		++len;

	d->name = malloc(len + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	i = 0;
	while (name[i])
	{
		d->name[i] = name[i];
		i++;
	}
	d->name[i] = ('\0');

	len = 0;
	while (owner[len])
		len++;

	d->owner = malloc(len + 1);
	if (d->owner == NULL)
		;
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	i = 0;
	while (owner[i])
	{
		d->owner[i] = owner[i];
		i++;
	}
	d->owner[i] = ('\0');

	d->age = age;
	return (d);
}
