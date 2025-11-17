#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to the integer array
 * @size: The size of the array
 * @action: Pointer to the function to execute on each element
 *
 * Description: This function iterates through each element of the array
 * and executes the function pointed to by action on each element.
 * It includes NULL pointer checks for safety.
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i; // Déclaration d'une variable de type size_t

	if (array == NULL || action == NULL) // Vérification que array et action ne sont pas nuls
		return;							 // si l'un des deux et nul, on retourne
	for (i = 0; i < size; i++)			 // Boucle : i commence à 0 et s'incrémente tant que i < size
		action(array[i]);				 // On appelle la fonction action avec array[i] comme argument
}
