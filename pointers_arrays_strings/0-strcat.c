#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string to append
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte at the end of dest, and then
 * adds a terminating null byte.
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0; // index pour parcourir dest
	int j = 0; // index pour parcourir src

	// Parcourt dest jusqu'à la fin de la chaîne
	while (dest[i] != '\0')
		i++;

	// Copie les caractères de src à la fin de dest
	while (src[j] != '\0')
	{
		dest[i] = src[j]; // copie le caractère de src dans dest
		i++;			  // passe à la position suivante dans dest
		j++;			  // passe à la position suivante dans src
	}

	dest[i] = '\0'; // ajoute le caractère de fin de chaîne à la fin de dest

	return (dest); // retourne le pointeur vers dest
}
