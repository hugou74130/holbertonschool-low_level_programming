#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at a given index in a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the node to find (starting from 0)
 *
 * Description: Traverses the doubly linked list and returns the node
 * at the specified index. If the index is out of bounds or the list
 * is empty, returns NULL.
 *
 * Return: pointer to the node at index, or NULL if not found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;

	if (head == NULL)

		return (NULL);
	current = head;
	count = 0;
	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}

	return (NULL);
}
