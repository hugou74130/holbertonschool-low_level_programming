#include <stdio.h>

/**
 * main - imprime un message sur la sortie d’erreur standard
 * Return: 1
 */

int main(void)
// Fonction principale qui affiche toutes les combinaisons possibles de deux chiffres différents
{
	int n;
	int j;
	for (n = 0; n <= 8; n++) // Premier chiffre de 0 à 8
	{
		for (j = n + 1; j <= 9; j++) // Deuxième chiffre commence juste après n jusqu'à 9
		{
			putchar(n + '0'); // Affiche le premier chiffre
			putchar(j + '0'); // Affiche le deuxième chiffre
			if (!(n == 8 && j == 9)) // Si ce n'est pas la dernière combinaison
			{
				putchar(','); // Affiche une virgule
				putchar(' '); // et un espace
			}
		}
	}
	putchar('\n'); // Saut de ligne final
	return (0);
}
