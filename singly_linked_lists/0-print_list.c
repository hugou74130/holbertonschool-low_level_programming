#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
// Fonction qui imprime tous les éléments d'une liste chaînée simplement (list_t)
{
	size_t count = 0; // Initialise un compteur de noeuds à 0

	while (h != NULL) // Parcourt la liste tant que le pointeur n'est pas NULL
	{
		if (h->str == NULL) // Si le membre str est NULL
			printf("[0] (nil)\n"); // Affiche [0] (nil) pour cet élément
		else
			printf("[%u] %s\n", h->len, h->str); // Sinon, affiche la longueur et la chaîne
		h = h->next; // Passe à l'élément suivant de la liste
		count++; // Incrémente le compteur de noeuds
	}
	return (count); // Retourne le nombre total de noeuds affichés
}
