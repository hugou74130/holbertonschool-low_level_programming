#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
// Fonction qui retourne le nombre d'éléments d'une liste doublement chaînée (dlistint_t)
{
	size_t count = 0; // Initialise un compteur à 0

	while (h != NULL) // Parcourt la liste jusqu'à la fin
	{
		count++; // Incrémente le compteur pour chaque noeud
		h = h->next; // Passe au noeud suivant
	}
	return (count); // Retourne le nombre total de noeuds
}
