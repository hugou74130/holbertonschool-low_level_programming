#include <stdio.h>

/**
 * main - point d'entrée du programme
 *
 * Return: 0 si succès
 */

int main(void)
{
	int c; // déclare une variable c pour stocker un caractère

	for (c = '0'; c <= '9'; c++) // boucle pour générer les chiffres de '0' à '9'
		putchar(c);				 // affiche le caractère c

	putchar('\n'); // affiche un saut de ligne
	return (0);	   // indique au système que le programme s'est exécuté avec succès
}
