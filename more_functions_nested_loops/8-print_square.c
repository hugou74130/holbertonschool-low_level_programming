#include "main.h"

/**
* print_square - prints a square, followed by a new line
* @size: size of the square
*
* If size is less than or equal to 0, the function should print only
* a new line
*/

void print_square(int size)
// Fonction qui affiche un carré de taille donnée avec le caractère '#'
{
	int i, j;
	if (size <= 0)
	{
		_putchar('\n'); // Si size <= 0, affiche seulement un saut de ligne
		return;
	}
	for (i = 0; i < size; i++) // Boucle pour chaque ligne
	{
		for (j = 0; j < size; j++) // Boucle pour chaque colonne
		{
			_putchar('#'); // Affiche '#'
		}
		_putchar('\n'); // Saut de ligne après chaque ligne du carré
	}
}
