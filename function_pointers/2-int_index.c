#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - Searches for an integer in an array
 * @array: Pointer to the integer array
 * @size: The number of elements in the array
 * @cmp: Pointer to the comparison function
 *
 * Description: Searches for an integer in the array by applying the
 * comparison function to each element. Returns the index of the first
 * element for which cmp does not return 0.
 *
 * Return: Index of the first matching element,
 * or -1 if no match or invalid input
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;							  // Déclaration d'une variable de type int
	if (array == NULL || cmp == NULL) // Vérification que array et cmp ne sont pas nuls
		return (-1);				  // Retourner -1 si l'un d'eux est nul
	for (i = 0; i < size; i++)		  // Boucle : i commence à 0 et s'incrémente tant que i < size
	{
		if (cmp(array[i]) != 0) // Si la fonction cmp retourne une valeur différente de 0
			return (i);			// Retourner l'index trouvé
	}
	return (-1); // Retourner -1 si aucun élément ne correspond
}
