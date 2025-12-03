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
// Fonction qui ajoute un nouveau noeud à la fin d'une liste doublement chaînée (dlistint_t)
{
	dlistint_t *new_node;
	dlistint_t *current;

	new_node = malloc(sizeof(dlistint_t)); // Alloue dynamiquement un nouveau noeud
	if (new_node == NULL)
		return (NULL); // Retourne NULL si l'allocation échoue
	new_node->n = n; // Stocke la valeur dans le noeud
	new_node->next = NULL; // Le prochain du nouveau noeud est NULL (fin de la liste)
	new_node->prev = NULL; // Initialise le précédent à NULL
	if (*head == NULL)
	{
		*head = new_node; // Si la liste est vide, le nouveau noeud devient le head
		return (new_node);
	}
	current = *head; // Commence au début de la liste
	while (current->next != NULL)
		current = current->next; // Va jusqu'au dernier élément
	current->next = new_node; // Ajoute le nouveau noeud à la fin
	new_node->prev = current; // Met à jour le précédent du nouveau noeud
	return (new_node); // Retourne l'adresse du nouveau noeud
}
