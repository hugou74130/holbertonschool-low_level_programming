#include <stdio.h>
#include "main.h"

/**
 * main - prints the program name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

	if (argc > 0) // Vérifie si le nombre d'arguments (argc) est supérieur à 0.

		// Affiche le premier argument (argv[0]), qui est le nom du programme,
		// suivi d'un retour à la ligne (\n).
		printf("%s\n", argv[0]);

	// Retourne 0 pour indiquer au système que le programme s'est
	// terminé avec succès.
	return (0);
}
