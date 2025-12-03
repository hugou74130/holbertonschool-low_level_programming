#include "lists.h"

/**
 * sum_dlistint - Return the sum of all the data of a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
// Fonction qui calcule la somme de toutes les valeurs (n) des noeuds d'une liste doublement chaînée
{
	dlistint_t *current;
	int sum;

	if (head == NULL)
		return (0); // Retourne 0 si la liste est vide
	current = head;
	sum = 0; // Initialise la somme à 0
	while (current != NULL)
	{
		sum += current->n; // Ajoute la valeur du noeud à la somme
		current = current->next; // Passe au noeud suivant
	}
	return (sum); // Retourne la somme totale
}
