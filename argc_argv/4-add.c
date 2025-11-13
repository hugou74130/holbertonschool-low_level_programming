#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Description: Adds all positive numbers passed as command line arguments.
 * If no arguments, prints 0. If any argument contains non-digit characters,
 * prints "Error" and returns 1.
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{

	int i;	 // Compteur pour les arguments (les "mots" dans argv)
	int j;	 // Compteur pour les caractères (les "lettres" dans argv[i])
	int sum; // Stocke la somme totale

	// Si argc == 1, seul le nom du programme est présent.
	if (argc == 1)
	{
		printf("0\n"); // Affiche 0, car la somme de 0 nombre est 0
		return (0);	   // Succès
	}

	sum = 0; // Initialise la somme
	i = 1;	 // Initialise 'i' à 1 pour ignorer argv[0] (le nom du programme)

	// Boucle sur chaque argument (chaîne) fourni par l'utilisateur
	while (i < argc)
	{
		j = 0; // Réinitialise le compteur de caractères pour CHAQUE nouvel argument

		// Boucle sur chaque CARACTÈRE de la chaîne argv[i]
		while (argv[i][j])
		{
			// Vérifie si le caractère actuel N'EST PAS un chiffre (0-9)
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n"); // Affiche une erreur
				return (1);		   // Retourne 1 (erreur)
			}
			j++; // Passe au caractère suivant
		}
		// On convertit la chaîne en entier et on l'AJOUTE à la somme
		sum += atoi(argv[i]);

		i++; // Passe à l'argument (chaîne) suivant
	}

	printf("%d\n", sum); // Affiche la somme totale
	return (0);			 // Indique que le programme s'est terminé sans erreur
}
