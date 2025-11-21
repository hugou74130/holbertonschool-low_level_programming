#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The base number
 * @y: The exponent
 *
 * Description: This function calculates x raised to the power of y using
 * recursion. If y is negative, the function returns -1.
 *
 * Return: The result of x to the power of y, or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)		 // vérifie si y est inférieur à 0 (les puissances négatives ne sont pas gérées ici)
		return (-1); // dans ce cas, on retourne -1 pour indiquer une erreur

	if (y == 0)		// si y est égal à 0
		return (1); // x^0 vaut toujours 1

	return (x * _pow_recursion(x, y - 1)); // multiplie x par le résultat de la puissance de y - 1 (récursion)
}
