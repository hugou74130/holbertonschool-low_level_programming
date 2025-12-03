#include "main.h"

/**
* print_diagonal - prints a diagonal line on the terminal
* @n: number of times the character \ should be printed
*
* If n is less than or equal to 0, the function should only print a
* new line
*/

void print_diagonal(int n)
// Fonction qui affiche une diagonale sur le terminal avec '\', n fois
{
	int i, j;
	if (n <= 0)
	{
		_putchar('\n'); // Si n <= 0, affiche juste un saut de ligne
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' '); // Ajoute des espaces avant '\' pour décaler la diagonale
		}
		_putchar('\\'); // Affiche le caractère '\' pour la diagonale
		_putchar('\n'); // Saut de ligne après chaque diagonale
	}
}
