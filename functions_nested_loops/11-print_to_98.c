#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: void
 */

void print_to_98(int n)
{
	// Vérifie si le nombre de départ 'n' est inférieur ou égal à 98.
	if (n <= 98)
	{
		// Si c'est le cas, on va compter "en montant" (par incrémentation).
		// Démarre une boucle qui s'exécute tant que 'n' est inférieur ou égal à 98.
		while (n <= 98)
		{
			// Affiche le nombre actuel.
			printf("%d", n);

			// Vérifie si le nombre actuel N'EST PAS le dernier (98).
			if (n != 98)
				// Si ce n'est pas le dernier, affiche un séparateur (virgule et espace).
				printf(", ");

			// Incrémente 'n' pour passer au nombre suivant.
			n++;
		}
	}
	// 'else' : s'exécute si 'n' était initialement supérieur à 98.
	else
	{
		// Si 'n' est > 98, on va compter "en descendant" (par décrémentation).
		// Démarre une boucle qui s'exécute tant que 'n' est supérieur ou égal à 98.
		while (n >= 98)
		{
			// Affiche le nombre actuel.
			printf("%d", n);

			// Vérifie si le nombre actuel N'EST PAS le dernier (98).
			if (n != 98)
				// Si ce n'est pas le dernier, affiche un séparateur (virgule et espace).
				printf(", ");

			// Décrémente 'n' pour passer au nombre précédent.
			n--;
		}
	}

	// Une fois que l'une des boucles est terminée (on a atteint 98),
	// affiche un caractère de nouvelle ligne pour terminer la sortie proprement.
	printf("\n");
}
