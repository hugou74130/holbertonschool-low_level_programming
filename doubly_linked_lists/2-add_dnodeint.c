#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list
 * @head: Double pointer to the head of the list
 * @n: The value to add in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
// Fonction qui ajoute un noeud au début d'une liste doublement chaînée (dlistint_t)
{
	dlistint_t *new = 0;

	new = malloc(sizeof(dlistint_t)); // Alloue dynamiquement un nouveau noeud
	if (new == NULL)
		return (NULL); // Retourne NULL si l'allocation échoue
	new->n = n; // Stocke la valeur reçue dans le champ n
	new->prev = NULL; // Le précédent du nouveau noeud est NULL
	new->next = *head; // Son suivant est l'ancien head
	if (*head != NULL)
		(*head)->prev = new; // Met à jour le précédent de l'ancien head
	*head = new; // Met à jour le head de la liste
	return (new); // Retourne l'adresse du nouveau noeud
}
