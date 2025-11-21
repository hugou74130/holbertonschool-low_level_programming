#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Libère la mémoire d'une structure dog_t
 * @d: Pointeur vers la structure dog_t
 *
 * Description: Désalloue complètement une structure dog_t en libérant
 * les chaînes name et owner, puis la structure elle-même.
 *
 * Return: Aucune (void)
 */

void free_dog(dog_t *d)
{
	if (d) // vérifie que le pointeur d n'est pas NULL
	{
		free(d->name);	// libère la mémoire allouée pour le champ name
		free(d->owner); // libère la mémoire allouée pour le champ owner
		free(d);		// libère la mémoire allouée pour la structure d elle-même
	}
}
