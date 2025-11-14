#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to check
 *
 * Return: the absolute value of n
 */

int _abs(int n)
{
	// Vérifie si le nombre 'n' est strictement négatif.
	if (n < 0)
	{
		// Si 'n' est négatif (ex: -5), retourne son opposé (ex: -(-5) = 5).
		return (-n);
	}
	else // Sinon (si 'n' est 0 ou positif)
	{
		// Retourne 'n' tel quel, car il est déjà sa propre valeur absolue.
		return (n);
	}
}
