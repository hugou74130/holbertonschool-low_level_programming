#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - point d'entrée du programme
 *
 * Return: 0 si succès
 */
int main(void)
{
	int n;			// variable qui contiendra un nombre aleatoire
	int last_digit; // varaible qui contiendra le last digit

	srand(time(0));			   // génére des nombres aléatoire different apres chaque exécution
	n = rand() - RAND_MAX / 2; // génére un nombre aléatoire positif ou negatif qui sera decaler de - rand_max / 2
	last_digit = n % 10;	   // prend le derniers digit de n

	printf("Last digit of %d is %d ", n, last_digit); // imprime le last digit

	if (last_digit > 5)					   // si last digit et supérieur a 5
		printf("and is greater than 5\n"); // il affiche quil est plus grand
	else if (last_digit == 0)			   // sinon il affiche 0
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}
