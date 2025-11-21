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
	if (d == NULL) // vérifie que le pointeur d n'est pas NULL
		return;	   // si d est NULL, on quitte la fonction pour éviter un crash

	// affiche le nom, ou "(nil)" si le nom est NULL
	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);

	// affiche l'âge (float) de la structure
	printf("Age: %f\n", d->age);

	// affiche le propriétaire, ou "(nil)" si owner est NULL
	printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
