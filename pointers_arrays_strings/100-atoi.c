#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Description: This function converts a string to an integer, handling
 * multiple signs before the number. It supports overflow detection and
 * returns INT_MAX or INT_MIN when the number exceeds integer limits.
 *
 * Return: The converted integer value, or 0 if no valid number is found,
 *         INT_MAX if positive overflow occurs, INT_MIN if negative overflow
 */

int _atoi(char *s)
// Fonction qui convertit une chaîne s en entier (comme atoi standard)
{
	int i = 0;
	int signe = 1;
	unsigned int nb = 0;

	// Ignore les caractères non numériques en début de chaîne, gère les signes
	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			signe *= -1; // Bascule le signe si '-' trouvé
		i++;
	}
	if (s[i] < '0' || s[i] > '9')
		return (0); // Retourne 0 si aucun chiffre après les signes

// Boucle pour convertir chaque chiffre
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (nb > (unsigned int)INT_MAX / 10)
		{
			return ((signe == 1) ? INT_MAX : INT_MIN); // Retourne max/min si overflow (mult 10)
		}

		nb = nb * 10 + (s[i] - '0'); // Ajoute le chiffre courant à nb

		if (signe == 1 && nb > (unsigned int)INT_MAX)
			return (INT_MAX); // Overflow positif
		if (signe == -1 && nb > (unsigned int)INT_MAX + 1)
			return (INT_MIN); // Overflow négatif

		i++;
	}

	/* Conversion finale, retourne le nombre avec le signe calculé */
	if (signe == -1)
		return ((int)(-nb));
	return ((int)nb);
}
