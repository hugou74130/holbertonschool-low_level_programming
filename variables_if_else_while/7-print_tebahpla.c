#include <stdio.h>

/**
 * main - imprime l'alphabet en minuscule à l'envers
 *
 * Return: 0 si succès
 */

int main(void)
{
	char c; // déclare une variable c pour stocker un caractère

	for (c = 'z'; c >= 'a'; c--) // boucle pour générer l'alphabet en minuscules à l'envers
		putchar(c);				 // affiche le caractère c

	putchar('\n'); // affiche un saut de ligne
	return (0);	   // indique au système que le programme s'est exécuté avec succès
}
