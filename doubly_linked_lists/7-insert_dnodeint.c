#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at a given index
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be inserted
 * @n: value to insert
 *
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
// Fonction qui insère un nouveau noeud à une position donnée dans une liste doublement chaînée
{
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int count;

	if (h == NULL)
		return (NULL); // Si la liste passée est vide, retourne NULL

	if (idx == 0)
		return (add_dnodeint(h, n)); // Si l'index est 0, insère au début

	current = *h;
	count = 0;

	while (current != NULL)
	{
		if (count == idx - 1) // Si on atteint l'élément précédant l'index souhaité
		{
			new_node = malloc(sizeof(dlistint_t)); // Alloue le nouveau noeud
			if (new_node == NULL)
				return (NULL); // Retourne NULL si l'allocation échoue

			new_node->n = n; // Stocke la valeur
			new_node->next = current->next; // Le suivant du nouveau noeud prend le suivant du courant
			new_node->prev = current; // Le précédent du nouveau noeud est le courant

			if (current->next != NULL)
				current->next->prev = new_node; // Met à jour le précédent du suivant (si pas en fin de liste)

			current->next = new_node; // Lie le noeud courant au nouveau noeud
			return (new_node); // Retourne l'adresse du nouveau noeud
		}
		current = current->next; // Passe au noeud suivant
		count++;
	}
	return (NULL); // Si l'index est trop grand, retourne NULL
}
