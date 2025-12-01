#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;
	size_t len;

	new = malloc(sizeof(list_t));
	if (new == NULL)

		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)

	{
		free(new);
		return (NULL);
		len = 0;
		while (str[len])
			len++;
		new->len = len;
		new->next = NULL;
		if (*head == NULL)
		{
			*head = new;
			return (new);
			current = *head;
			while (current->next != NULL)
				current = current->next;
			current->next = new;
		}
	}
	return (new);
}
