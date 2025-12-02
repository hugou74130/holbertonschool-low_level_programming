#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Ajoute un nouveau nœud à la fin d'une liste doublement chaînée
 * @head: pointeur sur le pointeur du premier nœud
 * @n: valeur entière à ajouter
 *
 * Return: adresse du nouveau nœud, ou NULL en cas d'erreur
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	dlistint_t *current;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
