#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
// Fonction qui ajoute un nouveau noeud à la fin d'une liste chaînée (list_t)
{
	list_t *new;
	list_t *temp;
	size_t len; // Variable pour la longueur de la chaîne

	if (head == NULL || str == NULL)
		return (NULL); // Si la liste ou la chaîne est invalide, retourne NULL

	new = malloc(sizeof(list_t)); // Alloue un nouveau noeud
	if (new == NULL)
		return (NULL); // Si l'allocation échoue, retourne NULL

	new->str = strdup(str); // Duplique la chaîne reçue
	if (new->str == NULL)
	{
		free(new); // Libère le noeud si la duplication échoue
		return (NULL);
	}

	len = 0;
	while (str[len])
		len++; // Calcule la longueur de la chaîne

	new->len = len; // Stocke la longueur dans le noeud
	new->next = NULL; // C'est le dernier noeud, donc next = NULL

	if (*head == NULL)
	{
		*head = new; // Si la liste est vide, le nouveau noeud devient le premier
		return (new);
	}

	temp = *head; // Débute au début de la liste
	while (temp->next != NULL)
		temp = temp->next; // Va jusqu'au dernier élément

	temp->next = new; // Relie le dernier élément au nouveau noeud

	return (new); // Retourne l'adresse du nouveau noeud
}
