#include "main.h"
#include <stdio.h>

/**
 * print_array - imprime les éléments d'un tableau d'entiers
 * @a: pointeur vers le tableau d'entiers
 * @n: nombre d'éléments à afficher
 *
 * Description: Cette fonction affiche les n premiers éléments du tableau a,
 * séparés par des virgules et des espaces, puis un saut de ligne à la fin.
 */

void print_array(int *a, int n)
// Fonction qui affiche n éléments d'un tableau d'entiers séparés par une virgule
{
	int i;

	for (i = 0; i < n; i++) // Parcourt chaque élément à afficher
	{
		printf("%d", a[i]); // Affiche la valeur
		if (i < n - 1)
		{
			printf(", "); // Ajoute une virgule sauf après le dernier
		}
	}
	printf("\n"); // Saut de ligne final
}
