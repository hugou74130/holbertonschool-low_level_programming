#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search
 * @accept: The string containing accepted characters
 *
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
// Fonction qui retourne le nombre d'octets initiaux de s présents dans accept
{
	unsigned int i = 0;
	int j;

	while (s[i] != '\0') // Parcourt la chaîne s
	{
		j = 0;
		while (accept[j] != '\0') // Pour chaque caractère de accept
		{
			if (s[i] == accept[j])
				break; // Si trouvé, sort de la boucle sur accept
			j++;
		}
		if (accept[j] == '\0')
			break; // Si non trouvé dans accept, arrête tout
		i++; // Sinon passe au caractère suivant
	}
	return (i); // Retourne le nombre de caractères trouvés
}
