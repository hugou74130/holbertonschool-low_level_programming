#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued Fibonacci terms
 *        whose values do not exceed 4,000,000
 *
 * Return: 0 on success
 */

int main(void)
{
	// Déclare les variables de type 'long' pour stocker de grands nombres.
	// a = 1, b = 2 : les deux premiers termes de la suite.
	// c : stockera le terme suivant (a + b).
	// sum = 0 : stockera la somme des termes pairs (initialisée à 0).
	long a = 1, b = 2, c, sum = 0;

	// Démarre une boucle 'while'.
	// Elle s'exécutera tant que le terme actuel 'b' est inférieur ou égal à 4 000 000.
	while (b <= 4000000)
	{
		// Vérifie si le terme actuel 'b' est pair.
		// (b % 2) calcule le reste de la division de 'b' par 2.
		// Si le reste est 0, le nombre est pair.
		if (b % 2 == 0)
		{
			// Si 'b' est pair, on l'ajoute à la somme ('sum').
			// sum += b; est un raccourci pour sum = sum + b;
			sum += b;
		}

		// Calcule le terme suivant de la suite.
		c = a + b;

		// Met à jour 'a' et 'b' pour l'itération suivante (on "avance" dans la suite).
		a = b; // 'a' prend l'ancienne valeur de 'b'.
		b = c; // 'b' prend la valeur du nouveau terme calculé.
	}

	// Une fois la boucle terminée (parce que 'b' a dépassé 4 000 000),
	// affiche la somme totale des termes pairs trouvés.
	printf("%ld\n", sum);

	// Retourne 0 pour indiquer que le programme s'est terminé avec succès.
	return (0);
}
