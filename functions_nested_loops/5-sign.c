#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 */

int print_sign(int n)
{
	// Vérifie si le nombre 'n' est strictement positif.
	if (n > 0)
	{
		// Si oui, affiche le caractère '+'.
		_putchar('+');
		// Retourne la valeur 1 pour "positif".
		return (1);
	}
	// Si 'n' n'est pas positif, vérifie s'il est égal à zéro.
	else if (n == 0)
	{
		// Si oui, affiche le caractère '0'.
		_putchar('0');
		// Retourne la valeur 0 pour "zéro".
		return (0);
	}
	// 'else' : s'exécute si 'n' n'est ni positif, ni zéro (il est donc négatif).
	else
	{
		// Affiche le caractère '-'.
		_putchar('-');
		// Retourne la valeur -1 pour "négatif".
		return (-1);
	}
}
