#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to be printed
 */

void _puts(char *str)
// Fonction qui affiche une chaîne puis un saut de ligne
{
	while (*str != '\0') // Tant qu'on n'est pas à la fin de la chaîne
	{
		_putchar(*str); // Affiche le caractère courant
		str++; // Passe au caractère suivant
	}
	_putchar('\n'); // Affiche un saut de ligne final
}
