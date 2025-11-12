#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Affiche les informations d'une structure dog
 * @d: Pointeur vers la structure dog à afficher
 *
 * Description:
 * Affiche les informations d'un chien (nom, âge, propriétaire).
 * Si un élément est NULL, affiche "(nil)" à la place.
 * Si d est NULL, la fonction ne fait rien.
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
