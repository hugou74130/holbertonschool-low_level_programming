#include <stdio.h>

/**
 * main - imprime un message sur la sortie d’erreur standard
 * Return: 1
 */

int main(void)
// Fonction principale qui affiche toutes les combinaisons possibles de trois chiffres différents
{
	int n;
	int j;
	int l;
	for (n = 0; n <= 8; n++) // Premier chiffre de 0 à 7 inclus
	{
		for (j = n + 1; j <= 9; j++) // Deuxième chiffre juste après n
			for (l = j + 1; l <= 9; l++) // Troisième chiffre après j
			{
				putchar(n + '0'); // Affiche le premier chiffre
				putchar(j + '0'); // Affiche le deuxième chiffre
				putchar(l + '0'); // Affiche le troisième chiffre
				if (!(n == 7 && j == 8 && l == 9)) // Si ce n'est pas la dernière combinaison
				{
					putchar(','); // Affiche une virgule
					putchar(' '); // et un espace
				}
			}
	}
	putchar('\n'); // Saut de ligne final
	return (0);
}
