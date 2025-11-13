#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid - Alloue une grille 2D d'entiers initialisés à 0
 * @width: Nombre de colonnes
 * @height: Nombre de lignes
 *
 * Return: Pointeur vers la grille allouée, NULL en cas d'erreur
 */

int **alloc_grid(int width, int height)
{
	int **grid; // Pointeur vers le "tableau de pointeurs" (qui représentera les lignes)
	int i;		// Compteur pour les lignes (height)
	int j;		// Compteur pour les colonnes (width)

	// Vérifie si les dimensions demandées sont invalides
	if (width <= 0 || height <= 0)
		return (NULL);

	// Étape 1 : Alloue la mémoire pour le tableau de pointeurs (les lignes)
	// On a besoin de 'height' pointeurs (un par ligne)
	grid = malloc(height * sizeof(int *));
	if (grid == NULL) // Vérifie l'échec de cette première allocation
		return (NULL);

	// Étape 2 : Boucle sur chaque ligne pour allouer la mémoire des colonnes
	for (i = 0; i < height; i++)
	{
		// Alloue la mémoire pour la ligne 'i', qui est un tableau de 'width' entiers
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL) // Si l'allocation de *cette* ligne échoue...
		{
			// Étape 3 (Cleanup) : On doit libérer TOUT ce qu'on a déjà alloué

			// Libère toutes les lignes précédentes (de 0 à i-1)
			for (j = 0; j < i; j++)
				free(grid[j]);

			// Libère le "tableau de pointeurs" principal
			free(grid);
			return (NULL); // Signale l'échec
		}

		// Étape 4 (Initialisation) : Met tous les éléments de la ligne 'i' à 0
		for (j = 0; j < width; j++)
			grid[i][j] = 0; // Initialise la cellule [i][j] à 0
	}

	return (grid); // Retourne le pointeur vers la grille 2D complète
}
