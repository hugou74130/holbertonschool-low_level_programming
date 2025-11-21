#include <stdio.h>
#include "main.h"

int _sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - Retourne la racine carrée naturelle d'un nombre
 * @n: Le nombre dont on veut trouver la racine carrée
 *
 * Return: La racine carrée naturelle si elle existe, -1 sinon
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - Fonction auxiliaire pour trouver la racine carrée récursivement
 * @n: Le nombre dont on cherche la racine carrée
 * @i: Le nombre actuel testé
 *
 * Return: La racine carrée naturelle si elle existe, -1 sinon
 */
int _sqrt_helper(int n, int i)
{
	if (n < 0)		 // Vérifie que n n'est pas négatif
		return (-1); // Si c'est le cas, on retourne -1

	if (i * i == n) // Si i * i est égal à n
		return (i); // Alors i est la racine carrée naturelle

	if (i * i > n)	 // Si i * i dépasse n
		return (-1); // Cela signifie qu'il n'existe pas de racine carrée naturelle

	return (_sqrt_helper(n, i + 1)); // Appel récursif avec i augmenté de 1
}
