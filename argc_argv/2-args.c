#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments passed into the program
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Description: This program prints each command-line argument
 * on a separate line, including the program name.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0; // Déclare ET initialise le compteur à 0

	// Boucle TANT QUE 'i' est inférieur au nombre total d'arguments
	while (i < argc)
	{
		// Affiche l'argument (la chaîne) à l'index 'i', suivi d'un newline
		printf("%s\n", argv[i]);

		// Incrémente 'i' pour passer à l'index suivant (l'argument suivant)
		i++;
	}

	// Indique au système que le programme s'est terminé avec succès
	return (0);
}
