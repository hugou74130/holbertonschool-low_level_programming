#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */

void swap_int(int *a, int *b)
// Fonction qui échange les valeurs pointées par a et b
{
	int temp;
	temp = *a; // Sauvegarde la valeur de *a
	*a = *b; // Met la valeur de *b dans *a
	*b = temp; // Replace la sauvegarde dans *b
}
