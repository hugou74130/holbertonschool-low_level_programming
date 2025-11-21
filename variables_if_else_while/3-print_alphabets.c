#include <stdio.h>

/**
 * main - point d'entrée du programme
 *
 * Return: 0 si succès
 */

int main(void)
{
	char c; // déclare c, qui servira à stocker un caractère

	for (c = 'a'; c <= 'z'; c++) // crée une boucle pour générer l'alphabet en minuscules
		putchar(c);				 // affiche la variable c

	for (c = 'A'; c <= 'Z'; c++) // crée une boucle pour générer l'alphabet en majuscules
		putchar(c);				 // affiche la variable c

	putchar('\n'); // affiche un saut de ligne

	return (0); // indique au système que le programme s'est exécuté avec succès
}
