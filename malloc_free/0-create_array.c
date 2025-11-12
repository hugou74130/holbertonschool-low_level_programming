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

char *create_array(unsigned int size, char c) // size taille du tableau, c caractère utilisé pour initialiser mon tableau
{
	char *arr; // pointeur vers le tableau 
	unsigned int i; // compteur pour la boucle 

	if (size == 0) // verification que size est pas = 0
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char)); // allocation de la mémoire pour size
	if (arr == NULL) // vérification apres la fin de lallocation mémoire
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)//boucle pour permettre de parcourir size
	{
		arr[i] = c;//c permet de mettre tout les caractère initialiser dans arr 
	}
	return (arr);
}
