#include <stdio.h>

/**
 * main - point d'entrée du programme
 *
 * Return: 0 si succès
 */

int main(void)
{
	char c;						 // Déclare une variable char c
	for (c = 'a'; c <= 'z'; c++) // Boucle qui parcourt les lettres de 'a' à 'z'
	{
		putchar(c); // Affiche le caractère c
	}
	putchar('\n'); // Affiche un saut de ligne
	return (0);
}
