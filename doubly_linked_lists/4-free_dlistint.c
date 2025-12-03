#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Description: Traverses the entire doubly linked list and frees
 * every node's allocated memory. Must save the next pointer before
 * freeing each node, otherwise we lose the reference to continue.
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
// Fonction qui libère toute la mémoire d'une liste doublement chaînée (dlistint_t)
{
	dlistint_t *current; // Pointeur courant pour parcourir la liste
	dlistint_t *next_node; // Pointeur pour sauvegarder le noeud suivant

	if (head == NULL)
		return; // Rien à libérer si la liste est vide
	current = head;
	while (current != NULL)
	{
		next_node = current->next; // Sauvegarde du noeud suivant
		free(current); // Libère le noeud courant
		current = next_node; // Passe au noeud suivant
	}
}
