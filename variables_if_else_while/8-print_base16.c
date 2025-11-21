#include <stdio.h>

/**
 * main - affiche tous les chiffres de base 16 en minuscules
 *
 * Return: 0 si succès
 */

int main(void)
{
	int n; // déclare la variable n pour stocker un chiffre ou un caractère

	for (n = 0; n < 10; n++) // boucle pour générer les chiffres de 0 à 9
		putchar(n + '0');	 // convertit le chiffre n en caractère et l'affiche

	for (n = 'a'; n <= 'f'; n++) // boucle pour générer les lettres de 'a' à 'f'
		putchar(n);				 // affiche le caractère n

	putchar('\n'); // affiche un saut de ligne
	return (0);	   // indique que le programme s'est exécuté avec succès
}
