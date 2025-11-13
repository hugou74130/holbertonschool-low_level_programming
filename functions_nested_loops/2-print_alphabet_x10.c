#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i, j; // 'i' sera le compteur pour les lignes, 'j' pour les lettres

	// Boucle externe : se répète 10 fois (pour i allant de 0 à 9)
	for (i = 0; i < 10; i++)
	{
		// Boucle interne : parcourt l'alphabet de 'a' à 'z'
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j); // Imprime UN SEUL caractère (la lettre 'j' actuelle)
		}

		// S'exécute APRES la boucle interne (quand l'alphabet est fini)
		_putchar('\n'); // Imprime un saut de ligne
	}
}
