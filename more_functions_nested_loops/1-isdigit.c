#include "main.h"
#include <stdio.h>

/**
* _isdigit - checks for a digit (0 through 9)
* @c: The character to be checked
*
* Return: 1 if c is a digit, 0 otherwise
*/

int _isdigit(int c)
// Fonction qui vérifie si un caractère est un chiffre (0-9)
{
	if (c >= '0' && c <= '9') // Vérifie si c est compris entre '0' et '9'
		return (1); // Retourne 1 si c'est un chiffre
	else
		return (0); // Retourne 0 sinon
}
