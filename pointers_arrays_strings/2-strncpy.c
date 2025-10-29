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
{
	int i = 0;

	/* Betty style requires a blank line after declarations */

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
