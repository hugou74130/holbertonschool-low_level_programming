#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string from src to dest
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
// Fonction qui copie la chaîne src dans dest (y compris le caractère nul)
{
	int i = 0;
	while (src[i] != '\0') // Tant qu'il y a des caractères à copier
	{
		dest[i] = src[i]; // Copie chaque caractère
		i++;
	}
	dest[i] = '\0'; // Ajoute le \0 final
	return (dest); // Retourne dest
}
