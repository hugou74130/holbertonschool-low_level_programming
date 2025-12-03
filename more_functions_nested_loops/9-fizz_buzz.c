#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 *        with Fizz for multiples of 3,
 *        Buzz for multiples of 5, and
 *        FizzBuzz for multiples of both 3 and 5
 *
 * Return: Always 0
 */
int main(void)
// Fonction principale : affiche les nombres de 1 à 100 avec FizzBuzz
{
	int i; // Déclare la variable d'itération
	for (i = 1; i <= 100; i++) // Parcourt les nombres de 1 à 100 inclus
	{
		if (i % 3 == 0 && i % 5 == 0) // Si i est multiple de 3 et 5
			printf("FizzBuzz");
		else if (i % 3 == 0) // Si i est multiple de 3 uniquement
			printf("Fizz");
		else if (i % 5 == 0) // Si i est multiple de 5 uniquement
			printf("Buzz");
		else
			printf("%d", i); // Sinon affiche i
		if (i != 100)
			printf(" "); // Espace entre les nombres sauf après le dernier
	}
	printf("\n"); // Saut de ligne final
	return (0);
}
