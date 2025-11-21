#include <stdio.h>

/**
 * main - point d'entrée du programme
 *
 * Return: 0 si succès
 */

int main(void)
{
	int n; // déclare une variable n pour stocker un chiffre

	for (n = 0; n < 10; n++) // boucle pour générer les chiffres de 0 à 9
		putchar(n + '0');	 // affiche le chiffre n en le convertissant en caractère
	putchar('\n');			 // affiche un saut de ligne
	return (0);				 // indique au système que le programme s'est exécuté avec succès
}
