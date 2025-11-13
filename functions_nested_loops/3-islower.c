#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: the character to check
 *
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	// Vérifie si 'c' est dans la plage ASCII de 'a' à 'z'
	if (c >= 'a' && c <= 'z')
	{
		return (1); // Retourne 1 pour "VRAI" (c'est une minuscule)
	}
	else // Sinon...
	{
		return (0); // Retourne 0 pour "FAUX" (ce n'est pas une minuscule)
	}
}
