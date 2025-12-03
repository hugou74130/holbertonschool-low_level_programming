#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: the string to be printed
 */
void puts2(char *str)
// Fonction qui affiche un caractère sur deux d'une chaîne, en commençant par le premier
{
	int len = 0, i;

	while (str[len] != '\0')
		len++; // Calcule la longueur

	for (i = 0; i < len; i += 2) // Commence à 0, saute un sur deux
	{
		_putchar(str[i]); // Affiche le caractère actuel
	}
	_putchar('\n'); // Saut de ligne final
}
