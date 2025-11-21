#include <stdio.h>

/**
 * main - point d'entrée du programme
 *
 * Return: 0 si succès
 */

int main(void)
{
	char c; // déclare une variable c

	for (c = 'a'; c <= 'z'; c++) // boucle pour générer l'alphabet en minuscules
	{
		if (c != 'q' && c != 'e') // condition pour exclure les lettres 'q' et 'e'
			putchar(c);			  // affiche le caractère c
	}

	putchar('\n'); // affiche un saut de ligne
	return (0);	   // indique au système que le programme s'est exécuté avec succès
}
