#include <stdio.h>

/**
 * _memcpy - Copie une zone mémoire vers une autre.
 * @dest: Pointeur vers la zone mémoire de destination.
 * @src: Pointeur vers la zone mémoire source.
 * @n: Nombre d'octets à copier.
 *
 * Description: Cette fonction copie `n` octets de la zone mémoire
 * pointée par `src` vers la zone mémoire pointée par `dest`.
 *
 * Return: Un pointeur vers la zone mémoire de destination `dest`.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i; // index pour parcourir les tableaux

	for (i = 0; i < n; i++) // Boucle de copie des octets
		dest[i] = src[i]; // Copie src[i] dans dest[i]
	return (dest); // retourne dest
}
