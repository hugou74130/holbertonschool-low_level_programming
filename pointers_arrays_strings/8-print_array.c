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
{

	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
