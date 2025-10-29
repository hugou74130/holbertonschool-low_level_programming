#include "main.h"
/**
 * ma_fonction_exemple - Décrit brièvement le but de la fonction.
 * @a: Description du paramètre 'a' (par exemple : le premier entier).
 * @b: Description du paramètre 'b' (par exemple : le second entier).
 *
 * Return: Description de la valeur de retour (par exemple : la somme de a et b).
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
