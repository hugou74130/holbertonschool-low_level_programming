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
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free all previously allocated rows */
			for (j = 0; j < i; j++)
				free(grid[j]);
			/* Free the grid pointer itself */
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
