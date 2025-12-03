#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
// Fonction qui ajoute un nouveau noeud au début d'une liste chaînée (list_t)
{
	list_t *new;
	size_t len; // Variable pour la longueur de la chaine reçue

	new = malloc(sizeof(list_t)); // Alloue dynamiquement un nouveau noeud
	if (new == NULL)
		return (NULL); // Retourne NULL si l'allocation échoue

	new->str = strdup(str); // Duplique la chaîne reçue dans le nouveau noeud
	if (new->str == NULL)
	{
		free(new); // Libère le noeud si la duplication échoue
		return (NULL);
	}

	len = 0;
	while (str[len])
		len++; // Calcule la longueur de la chaîne

	new->len = len; // Stocke la longueur dans le noeud
	new->next = *head; // Le noeud suivant est l'ancien head
	*head = new; // Met à jour le head pour pointer sur le nouveau noeud

	return (new); // Retourne l'adresse du nouveau noeud
}
