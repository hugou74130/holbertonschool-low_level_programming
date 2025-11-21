#include <stdio.h>
#include "main.h"

/**
 * factorial - Calculates the factorial of a number
 * @n: The number to calculate the factorial of
 *
 * Return: The factorial of n, or -1 if n is negative
 */

int factorial(int n)
{
	if (n < 0)		 // vérifie si n est inférieur à 0 (la factorielle n'existe pas pour les valeurs négatives)
		return (-1); // dans ce cas, on retourne -1 pour indiquer une erreur

	if (n == 0 || n == 1) // si n vaut 0 ou 1, la factorielle est 1
		return (1);		  // donc on retourne 1

	return (n * factorial(n - 1)); // sinon, on multiplie n par factorial(n - 1) pour utiliser la récursion
}
