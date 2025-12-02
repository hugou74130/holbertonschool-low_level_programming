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
{
	dlistint_t *current;
	dlistint_t *next_node;

	if (head == NULL)
		return;
	current = head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
