#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Inverse le contenu d'un tableau d'entiers
 * @a: Pointeur vers le tableau d'entiers
 * @n: Le nombre d'éléments dans le tableau
 *
 * Description: Cette fonction échange les éléments de manière symétrique
 * (premier avec dernier, deuxième avec avant-dernier, etc.) jusqu'à ce
 * que le milieu du tableau soit atteint. La modification est faite
 * directement (in-place) sur le tableau pointé par 'a'.
 *
 * Return: void (Aucun retour)
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;
	{
		for (i = 0; i < n / 2; i++)

		{
			temp = a[i];
			a[i] = a[n - 1 - i];
			a[n - 1 - i] = temp;
		}
	}
}
