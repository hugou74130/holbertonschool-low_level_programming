#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet_each_line(void)
{

	char c; // Déclare une variable 'c' qui va stocker un caractère

	// Début de la boucle 'for'
	for (c = 'a'; c <= 'z'; c++) // Initialise 'c' à 'a'; continue tant que 'c' <= 'z'; passe à la lettre suivante (c++) après chaque tour
	{

		_putchar(c); // Imprime le caractère actuel contenu dans 'c'

		_putchar('\n'); // Imprime un caractère "saut de ligne" (newline)
	}
}
