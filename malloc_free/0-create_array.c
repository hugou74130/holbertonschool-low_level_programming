#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates a character array and initializes it
 * with a specific character.
 * @size: The size of the array to create (unsigned int)
 * @c: The character used for initialization
 *
 * Return: A pointer to the allocated array, or NULL if size is 0
 * or if memory allocation fails
 */

char *create_array(unsigned int size, char c) // size: taille du tableau, c: caractère d'initialisation
{
	char *arr;		// Pointeur qui contiendra l'adresse du tableau alloué
	unsigned int i; // Compteur pour la boucle (index)

	if (size == 0) // Vérifie si la taille demandée est nulle
	{
		return (NULL); // Retourne NULL car on ne peut pas allouer un tableau de taille 0
	}

	// Alloue 'size' octets (sizeof(char)
	arr = malloc(size * sizeof(char));

	if (arr == NULL) // Vérifie si l'allocation mémoire (malloc) a échoué
	{
		return (NULL); // Retourne NULL pour signaler l'échec
	}

	// Boucle pour parcourir chaque case du tableau, de 0 à (size - 1)
	for (i = 0; i < size; i++)
	{
		arr[i] = c; // Affecte le caractère 'c' à l'élément courant du tableau
	}

	return (arr); // Retourne le pointeur vers le tableau alloué et initialisé
}
