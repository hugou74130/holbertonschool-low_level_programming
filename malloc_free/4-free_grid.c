#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - Libère une grille 2D précédemment créée par alloc_grid
 * @grid: Pointeur vers la grille 2D à libérer
 * @height: Nombre de lignes de la grille
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i; // Compteur pour parcourir les lignes

	if (grid == NULL) // Si le pointeur principal est NULL, il n'y a rien à faire
		return;

	// Étape 1 : Libérer la mémoire de chaque ligne individuelle
	for (i = 0; i < height; i++)
		free(grid[i]); // Libère le tableau d'entiers pointé par grid[i]

	// Étape 2 : Libérer le "tableau de pointeurs" (les lignes)
	free(grid);
}
