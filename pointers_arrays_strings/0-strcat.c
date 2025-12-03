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
// Fonction qui concatène la chaîne src à la fin de la chaîne dest
{
	int i = 0; // index pour parcourir dest
	int j = 0; // index pour parcourir src

	while (dest[i] != '\0') // Trouve la fin de la chaîne dest
		i++;
	while (src[j] != '\0') // Parcourt chaque caractère de src
	{
		dest[i] = src[j]; // Ajoute src[j] à la suite de dest
		i++; // Avance dans dest
		j++; // Avance dans src
	}
	dest[i] = '\0'; // Ajoute le caractère nul à la fin
	return (dest); // Retourne dest
}
