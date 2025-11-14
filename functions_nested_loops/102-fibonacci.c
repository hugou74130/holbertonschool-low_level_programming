#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 0 and 1
 *
 * Return: 0 on success
 */

int main(void)
{
	// Déclare trois variables de type 'long' (pour stocker de grands nombres).
	// 'a' et 'b' sont initialisés comme les deux premiers termes de la suite.
	// 'c' stockera le terme suivant (la somme de a et b).
	long a = 1, b = 2, c;

	// Déclare une variable 'i' qui servira de compteur pour la boucle.
	int i;

	// Affiche les deux premiers termes (1 et 2) avant de démarrer la boucle.
	// %ld est utilisé pour afficher des variables de type 'long'.
	printf("%ld, %ld", a, b);

	// Démarre une boucle 'for'.
	// Elle commence à 'i = 2' (car on a déjà affiché les 2 premiers termes).
	// Elle continue tant que 'i' est strictement inférieur à 50.
	// Cela signifie que la boucle s'exécutera pour i = 2, 3, ..., 49 (soit 48 fois).
	// Au total, (2 termes affichés avant) + (48 termes calculés) = 50 termes.
	for (i = 2; i < 50; i++)
	{
		// Calcule le terme suivant ('c') en additionnant les deux termes précédents ('a' et 'b').
		c = a + b;

		// Affiche le nouveau terme calculé, précédé d'une virgule et d'un espace.
		printf(", %ld", c);

		// Met à jour les variables pour la prochaine itération :
		// 'a' prend l'ancienne valeur de 'b'.
		a = b;

		// 'b' prend la valeur du nouveau terme qui vient d'être calculé ('c').
		b = c;
	}

	// Une fois la boucle terminée, affiche un caractère "nouvelle ligne" (\n)
	// pour que le prompt du terminal n'apparaisse pas sur la même ligne que la sortie.
	printf("\n");

	// Indique au système d'exploitation que le programme s'est terminé avec succès (code 0).
	return (0);
}
