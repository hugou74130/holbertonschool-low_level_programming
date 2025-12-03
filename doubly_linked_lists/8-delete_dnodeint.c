#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: double pointer to the head of the list
 * @index: index of the node to delete, starting at 0
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
// Fonction qui supprime le noeud à un index donné d'une liste doublement chaînée
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1); // Retourne -1 si la liste est vide ou invalide
	current = *head;
	if (index == 0)
	{
		*head = current->next; // Met à jour la tête de la liste
		if (*head != NULL)
			(*head)->prev = NULL; // Met à jour le précédent si la liste n'est pas vide après suppression
		free(current); // Libère le noeud supprimé
		return (1); // Succès
	}
	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
			return (-1); // Retourne -1 si l'index n'existe pas
		current = current->next; // Passe au noeud suivant
	}
	current->prev->next = current->next; // Relie le noeud précédent au suivant
	if (current->next != NULL)
		current->next->prev = current->prev; // Met à jour le précédent du suivant si pas à la fin
	free(current); // Libère le noeud ciblé
	return (1); // Succès
}
