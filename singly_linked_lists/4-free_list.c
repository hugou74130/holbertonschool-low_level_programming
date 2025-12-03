#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 *
 * Return: void
 */

void free_list(list_t *head)
// Fonction qui libère toute la mémoire d'une liste chaînée (list_t)
{
	list_t *temp; // Pointeur temporaire pour parcourir la liste

	while (head != NULL) // Tant qu'il reste des noeuds à libérer
	{
		temp = head->next; // Sauvegarde le pointeur vers le prochain noeud
		free(head->str); // Libère la chaîne du noeud courant
		free(head); // Libère le noeud courant
		head = temp; // Passe au noeud suivant
	}
}
