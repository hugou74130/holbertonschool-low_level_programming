#include "main.h"

/**
* print_triangle - prints a triangle, followed by a new line
* @size: size of the triangle
*
* If size is less than or equal to 0, the function should print only
* a new line
*/

void print_triangle(int size)
// Fonction qui affiche un triangle de taille donnée avec le caractère '#'
{
	int i, j, k;
	if (size <= 0)
	{
		_putchar('\n'); // Si size <= 0, affiche seulement un saut de ligne
		return;
	}
	for (i = 1; i <= size; i++) // Chaque ligne du triangle
	{
		for (j = size - i; j > 0; j--) // Affiche les espaces pour aligner le triangle à droite
		{
			_putchar(' ');
		}
		for (k = 0; k < i; k++) // Affiche les '#' correspondant à la ligne
		{
			_putchar('#');
		}
		_putchar('\n'); // Saut de ligne à chaque fin de ligne du triangle
	}
}
