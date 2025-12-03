#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string to print
 */
void print_rev(char *s)
// Fonction qui affiche une chaîne à l'envers
{
	int len = 0;

	/* Trouve la longueur de la chaîne */
	while (s[len] != '\0')
		len++;

	/* Affiche la chaîne à l'envers */
	while (len > 0)
	{
		_putchar(s[len - 1]); // Affiche le caractère courant en partant de la fin
		len--; // Recul d'un caractère
	}
	_putchar('\n'); // Saut de ligne
}
