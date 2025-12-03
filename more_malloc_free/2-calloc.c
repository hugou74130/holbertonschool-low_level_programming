#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: Number of elements in the array
 * @size: Size in bytes of each element
 *
 * Description: Allocates memory for an array of nmemb elements of size bytes
 * each. The allocated memory is initialized to zero. If nmemb or size is 0,
 * or if malloc fails, the function returns NULL.
 *
 * Return: A pointer to the allocated memory, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
// Fonction qui alloue la mémoire pour un tableau et l'initialise à zéro
{
	char *arr;
	unsigned int total;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL); // Vérifie les paramètres
	total = nmemb * size; // Calcule la taille totale à allouer

	arr = malloc(total); // Alloue la mémoire demandée

	if (arr == NULL)
		return (NULL); // Retourne NULL si l'allocation échoue

	for (i = 0; i < total; i++)
		arr[i] = 0; // Initialise chaque octet à 0

	return ((void *)arr); // Retourne le pointeur vers la mémoire allouée
}
