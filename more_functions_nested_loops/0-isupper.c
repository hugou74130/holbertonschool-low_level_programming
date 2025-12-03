#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
// Fonction qui vérifie si un caractère est une majuscule
{
	if (c >= 'A' && c <= 'Z') // Vérifie si c est dans l'intervalle des majuscules ASCII
		return (1); // Retourne 1 si c'est le cas
	else
		return (0); // Retourne 0 sinon
}
