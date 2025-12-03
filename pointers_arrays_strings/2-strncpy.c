#include "main.h"

/**
 * _strncpy - Copie au maximum n octets
 * @dest: Le pointeur vers le tampon de destination.
 * @src: Le pointeur vers la chaîne source.
 * @n: Le nombre maximal d'octets à copier.
 *
 * Return: Le pointeur vers la chaîne de destination dest.
 */
char *_strncpy(char *dest, char *src, int n)
// Fonction qui copie au maximum n octets de src dans dest
{
	int i = 0;

	while (i < n && src[i] != '\0') // Copie caractères de src dans dest jusqu'à n ou fin de src
	{
		dest[i] = src[i]; // Copie le caractère courant
		i++;
	}
	while (i < n) // Continue jusqu'à n pour remplir de '\0' s'il reste de la place
	{
		dest[i] = '\0'; // Ajoute '\0' si src est terminée
		i++;
	}
	return (dest); // Retourne le résultat
}
