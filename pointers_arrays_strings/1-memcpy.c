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

	// Copie les n premiers octets de src vers dest
	for (i = 0; i < n; i++)
		dest[i] = src[i]; // copie le caractère/octet de src[i] dans dest[i]

	return (dest); // retourne le pointeur vers dest
}
