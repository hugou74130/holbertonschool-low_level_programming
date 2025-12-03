#include "main.h"
/**
* print_line - prints a straight line in the terminal
* @n: number of times the character _ should be printed
*
* If n is less than or equal to 0, the function should only print a
* new line
*/

void print_line(int n)
// Fonction qui imprime une ligne droite de caractères '_', n fois
{
	int i;
	if (n <= 0)
	{
		_putchar('\n'); // Si n <= 0, imprime juste un saut de ligne
		return;
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_'); // Affiche '_' n fois
	}
	_putchar('\n'); // Termine par un saut de ligne
}
