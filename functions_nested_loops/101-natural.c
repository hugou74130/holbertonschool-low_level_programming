#include <stdio.h>

int main(void)
{
	// Déclare une variable 'sum' pour stocker la somme totale.
	// Elle est initialisée à 0.
	int sum = 0;

	// Déclare une variable 'i' qui servira de compteur de boucle.
	int i;

	// Démarre une boucle 'for' qui va itérer de i = 0 jusqu'à i = 1023.
	// La boucle s'arrête quand 'i' atteint 1024 (car 1024 < 1024 est faux).
	for (i = 0; i < 1024; i++)
	{
		// Condition 'if' : vérifie si le nombre 'i' est un multiple de 3 OU de 5.
		// (i % 3 == 0) : Vrai si 'i' est divisible par 3 (le reste est 0).
		// (i % 5 == 0) : Vrai si 'i' est divisible par 5 (le reste est 0).
		// || (OU logique) : La condition est vraie si l'une OU l'autre (ou les deux) est vraie.
		if (i % 3 == 0 || i % 5 == 0)
		{
			// Si la condition est vraie, ajoute la valeur actuelle de 'i' à 'sum'.
			// sum += i; est le raccourci pour sum = sum + i;
			sum += i;
		}
	}

	// Une fois la boucle terminée, affiche la somme totale calculée.
	// %d est pour afficher un entier (int), \n pour un saut de ligne.
	printf("%d\n", sum);

	// Retourne 0 pour indiquer que le programme s'est terminé sans erreur.
	return (0);
}
