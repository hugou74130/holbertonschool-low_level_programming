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
	int n;				   // variable qui contiendra un nombre aléatoire
	srand(time(0));		   // sert a générer des nombres aléatoires différents a chaque exécution
	n = rand() - RAND_MAX; // génére un nombre aléatoire et le décale pour inclure un nombre négatif
	if (n > 0)			   // verification que n est supérieur a 0
	{
		printf("%d is positive\n", n); // afficher la decimal de n
	}
	else if (n == 0) // si n est egal a 0
	{
		printf("%d is zero\n", n); // affiche la decimal de n
	}
	else // sinon
	{
		printf("%d is negative\n", n); // affiche la decimal de n
	}
	return (0); // retourne est indique au systeme que le programme ces executer sans erreur
}
