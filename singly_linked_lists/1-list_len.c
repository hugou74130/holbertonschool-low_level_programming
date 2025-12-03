#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t list_len(const list_t *h)
// Fonction qui retourne le nombre d'éléments d'une liste chaînée simplement (list_t)
{

	size_t count = 0; // Initialise un compteur à 0

	while (h != NULL) // Parcourt la liste tant que le pointeur n'est pas NULL
	{
		count++; // Incrémente le compteur pour chaque noeud rencontré
		h = h->next; // Passe à l'élément suivant de la liste
	}
	return (count); // Retourne le nombre total de noeuds
}
