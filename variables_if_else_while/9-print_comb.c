#include <stdio.h>

/**
 * main - point d'entrée du programme
 *
 * Return: 0 si succès
 */

int main(void)
{
	int n; // déclare une variable n

	for (n = 0; n <= 9; n++) // boucle pour générer les chiffres de 0 à 9 inclus
	{
		putchar(n + '0'); // convertit le chiffre n en caractère
		if (n != 9)		  // vérifie que n n'est pas égal à 9
		{
			putchar(','); // affiche une virgule
			putchar(' '); // affiche un espace
		}
	}

	putchar('\n'); // affiche un saut de ligne
	return (0);	   // indique que le programme s'est exécuté avec succès
}
