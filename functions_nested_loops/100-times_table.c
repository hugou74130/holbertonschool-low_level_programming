#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to print
 *
 * Description: This function prints an integer number
 * recursively using the _putchar function.
 */

void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The size of the times table (must be between 0 and 15)
 *
 * Description: Prints the multiplication table from 0 up to n,
 * formatted with commas and spaces so columns align properly.
 */

void print_times_table(int n)
{
	// Déclare les variables : 'i' pour les lignes, 'j' pour les colonnes,
	// et 'product' pour stocker le résultat de la multiplication.
	int i, j, product;

	// Condition de garde : Si 'n' est hors de l'intervalle [0, 15]
	// (négatif ou trop grand), la fonction ne fait rien.
	if (n < 0 || n > 15)
		return; // Arrête immédiatement la fonction.

	// Boucle externe : itère sur les LIGNES, de 0 jusqu'à 'n'.
	// 'i' représente le multiplicande.
	for (i = 0; i <= n; i++)
	{
		// Boucle interne : itère sur les COLONNES, de 0 jusqu'à 'n'.
		// 'j' représente le multiplicateur.
		for (j = 0; j <= n; j++)
		{
			// Calcule le produit pour la cellule (i, j) actuelle.
			product = i * j;

			// Cas spécial : pour la TOUTE PREMIÈRE colonne (j == 0).
			if (j == 0)
			{
				// Affiche '0' (puisque i * 0 = 0).
				_putchar('0');
			}
			// Pour toutes les AUTRES colonnes.
			else
			{
				// Affiche la virgule et l'espace de séparation.
				_putchar(',');
				_putchar(' ');

				// Gère l'alignement des nombres pour qu'ils forment des colonnes nettes.
				// Si le produit est un seul chiffre (par ex. 7)...
				if (product < 10)
				{
					// ...ajoute deux espaces de "remplissage" avant le nombre.
					_putchar(' ');
					_putchar(' ');
				}
				// Si le produit a deux chiffres (par ex. 42)...
				else if (product < 100)
				{
					// ...ajoute un seul espace de "remplissage".
					_putchar(' ');
				}
				// (Si le produit a 3 chiffres, aucun espace n'est ajouté).

				// Appelle une fonction (non définie ici) qui se charge
				// d'afficher le nombre 'product' chiffre par chiffre.
				print_number(product);
			}
		}
		// Une fois la boucle interne (colonnes) terminée,
		// passe à la ligne suivante pour commencer la prochaine ligne de la table.
		_putchar('\n');
	}
}
