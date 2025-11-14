#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 on success
 */
int main(void)
{
	int i; // i: Compteur pour la boucle 'for'

	// Initialise les deux premiers nombres de Fibonacci (a=1, b=2)
	unsigned long a = 1, b = 2;

	// Variables pour stocker les parties "tête" (milliards) et "queue"
	unsigned long a_head, a_tail, b_head, b_tail;
	unsigned long head, tail; // Parties tête/queue de la *nouvelle* somme

	// La limite où l'on "casse" le nombre (1 milliard, pour 9 chiffres)
	unsigned long limit = 1000000000;

	// Affiche les deux premiers nombres
	printf("%lu, %lu", a, b);

	// Boucle pour calculer et afficher les 96 termes suivants (de i=2 à i=97)
	for (i = 2; i < 98; i++)
	{
		// ----- CALCUL DU NOUVEAU TERME -----

		// Cas 'simple' : Si 'b' (le plus grand) est < 1 milliard
		if (b < limit)
		{
			head = 0;	  // Le nouveau nombre n'a pas de "tête" (milliards)
			tail = a + b; // La "queue" est juste la somme normale
		}
		else // Cas 'complexe' : 'b' (et peut-être 'a') dépasse 1 milliard
		{
			// Décompose 'a' en tête et queue
			a_head = a / limit;
			a_tail = a % limit;

			// Décompose 'b' en tête et queue
			b_head = b / limit;
			b_tail = b % limit;

			// Calcule la nouvelle tête : Tête(a) + Tête(b) + Retenue(queues)
			head = a_head + b_head + (a_tail + b_tail) / limit;

			// Calcule la nouvelle queue : Reste de la somme des queues
			tail = (a_tail + b_tail) % limit;
		}

		// ----- AFFICHAGE DU NOUVEAU TERME -----

		if (head > 0) // Si le nouveau nombre a une "tête"
		{
			// Affiche la tête, PUIS la queue AVEC 9 chiffres (rembourrage '0')
			printf(", %lu%09lu", head, tail);
		}
		else // Si le nombre n'a pas de "tête"
		{
			printf(", %lu", tail); // Affiche juste la queue
		}

		// ----- MISE À JOUR POUR LE PROCHAIN TOUR -----

		a = b; // L'ancien 'b' devient le nouveau 'a'

		// Reconstitue le nombre complet 'b' pour le prochain calcul
		// (C'EST ICI LE DÉFAUT : 'b' va déborder la limite de 'unsigned long')
		b = head * limit + tail;
	}

	printf("\n"); // Saut de ligne final
	return (0);	  // Succès
}
