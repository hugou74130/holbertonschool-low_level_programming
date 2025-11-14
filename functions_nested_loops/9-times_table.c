#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	// Déclare 'i' (pour les lignes), 'j' (pour les colonnes),
	// et 'result' (pour le produit i * j).
	int i, j, result;

	// Boucle externe pour les LIGNES (de 0 à 9). 'i' est le multiplicande.
	for (i = 0; i <= 9; i++)
	{
		// Boucle interne pour les COLONNES (de 0 à 9). 'j' est le multiplicateur.
		for (j = 0; j <= 9; j++)
		{
			// Calcule le produit pour la cellule (i, j) actuelle.
			result = i * j;

			// Cas spécial : pour la TOUTE PREMIÈRE colonne (j == 0).
			if (j == 0)
			{
				// Affiche juste le premier chiffre (i * 0 = 0).
				// (result + '0') convertit l'entier 0 en caractère '0'.
				_putchar(result + '0');
			}
			// Pour toutes les AUTRES colonnes (j > 0).
			else
			{
				// Affiche le séparateur (virgule et espace).
				_putchar(',');
				_putchar(' ');

				// Gère l'alignement des nombres.
				// Si le résultat est un seul chiffre (plus petit que 10)...
				if (result < 10)
				{
					// ...ajoute un espace de "remplissage" pour l'alignement.
					_putchar(' ');
				}
				// 'else' : Si le résultat a deux chiffres (plus grand ou égal à 10).
				else
				{
					// Affiche le chiffre des DIZAINES.
					// (result / 10) isole le chiffre des dizaines (ex: 81 / 10 = 8).
					// (+ '0') le convertit en caractère (ex: 8 -> '8').
					_putchar((result / 10) + '0');
				}

				// Affiche le chiffre des UNITÉS (fonctionne pour 1 et 2 chiffres).
				// (result % 10) isole le chiffre des unités (ex: 81 % 10 = 1).
				// (+ '0') le convertit en caractère (ex: 1 -> '1').
				_putchar((result % 10) + '0');
			}
		}
		// Une fois la boucle interne (colonnes) terminée,
		// passe à la ligne suivante pour commencer la prochaine ligne de la table.
		_putchar('\n');
	}
}
