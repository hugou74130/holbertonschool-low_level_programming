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
	int sum1;	// cree un entier sum 1
	int sum2;	// cree un entier sum 2
	int result; // cree un entier resultat qui nous serviras pour sum 1 et sum 2

	if (argc != 3) // si argc nest pas egal a 3
	{
		printf("Error\n"); // on imprime une erreur
		return (1);		   // signale que le programme a eu une erreur
	}
	sum1 = atoi(argv[1]);	// convertie argv en entier
	sum2 = atoi(argv[2]);	// converti argv en entier
	result = sum1 * sum2;	// met le resultat de sum*sum2 dans result
	printf("%d\n", result); // imprime le resultat
	return (0);				// indique que le code est retourner sans aucun erreur
}
