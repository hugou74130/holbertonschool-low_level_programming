#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer value to store in the new node
 *
 * Description: Creates a new node with value n and adds it at the end
 * of the doubly linked list. If the list is empty, the new node becomes
 * the head. Updates the prev and next pointers correctly for a doubly
 * linked list.
 *
 * Return: Address of the newly created node, or NULL if malloc failed
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
