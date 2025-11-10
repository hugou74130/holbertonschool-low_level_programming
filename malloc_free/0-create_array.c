#include <stdlib.h>
#include "main.h"

/**
 * create_array - Crée un tableau de caractères
 * et l'initialise avec un caractère spécifique.
 * @size: La taille du tableau à créer (unsigned int).
 * @c: Le caractère utilisé pour l'initialisation.
 *
 * Retourne: Un pointeur vers le tableau alloué,
 * ou NULL si la taille est 0 ou si l'allocation mémoire échoue.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;
	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
