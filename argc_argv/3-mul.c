#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Description: Multiplies two integer numbers passed as command line arguments
 * and prints the result. If the
 * number of arguments is incorrect, prints "Error"
 * and returns 1.
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int sum1;	// Variable pour stocker le premier nombre
	int sum2;	// Variable pour stocker le second nombre
	int result; // Variable pour stocker le résultat

	if (argc != 3)
	{
		printf("Error\n"); // Affiche un message d'erreur si le nombre d'arguments est faux
		return (1);		   // signale que le programme a eu une erreur
	}

	// Convertit le 1er argument (argv[1]) de chaîne (ASCII) en entier
	sum1 = atoi(argv[1]);
	// Convertit le 2e argument (argv[2]) de chaîne (ASCII) en entier
	sum2 = atoi(argv[2]);

	result = sum1 * sum2; // Calcule la multiplication

	printf("%d\n", result); // Imprime le résultat

	return (0); // indique que le code est retourné sans aucune erreur
}
