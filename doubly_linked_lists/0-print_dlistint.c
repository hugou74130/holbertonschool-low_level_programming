#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
// Fonction qui affiche tous les éléments d'une liste doublement chaînée (dlistint_t)
{
	size_t count = 0; // Initialise un compteur de noeuds

	while (h != NULL) // Parcourt la liste jusqu'à la fin
	{
		printf("%d\n", h->n); // Affiche la valeur du noeud courant
		h = h->next; // Passe au noeud suivant
		count++; // Incrémente le compteur de noeuds
	}
	return (count); // Retourne le nombre total de noeuds
}
