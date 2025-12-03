#include "lists.h"

/**
 * get_dnodeint_at_index - Return the node at a given index
 * @head: pointer to the head of the list
 * @index: the index to look for
 *
 * Return: the node at index, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
// Fonction qui récupère le noeud à une position donnée dans une liste doublement chaînée
{
	dlistint_t *current;
	unsigned int count;

	if (head == NULL)
		return (NULL); // Retourne NULL si la liste est vide
	current = head;
	count = 0;
	while (current != NULL)
	{
		if (count == index) // Si le compteur atteint l'index cherché
			return (current); // Retourne le noeud courant
		current = current->next; // Passe au noeud suivant
		count++; // Incrémente le compteur
	}
	return (NULL); // Si l'index n'existe pas, retourne NULL
}
