#include <stdio.h>

/**
 * main - imprime un message sur la sortie d’erreur standard
 * Return: 1
 */

int main(void)
// Fonction principale qui affiche toutes les combinaisons possibles de deux nombres de deux chiffres, sans répétition d'ordre
{
	int n;
	int j;
	for (n = 0; n <= 98; n++) // Premier nombre de 00 à 98
	{
		for (j = n + 1; j <= 99; j++) // Deuxième nombre, toujours supérieur au premier
		{
			putchar(n / 10 + '0'); // Affiche la dizaine du premier nombre
			putchar(n % 10 + '0'); // Affiche l'unité du premier nombre
			putchar(' '); // Espace entre les deux nombres
			putchar(j / 10 + '0'); // Affiche la dizaine du deuxième nombre
			putchar(j % 10 + '0'); // Affiche l'unité du deuxième nombre
			if (!(n == 98 && j == 99)) // Si ce n'est pas la dernière combinaison
			{
				putchar(','); // Virgule
				putchar(' '); // Espace
			}
		}
	}
	putchar('\n'); // Saut de ligne final
	return (0);
}

