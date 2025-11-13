#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Duplique une chaîne de
 * caractères dans une nouvelle zone mémoire
 * @str: La chaîne à dupliquer
 *
 * Return: Un pointeur vers la chaîne dupliquée, ou NULL si str est NULL
 * ou si l'allocation mémoire échoue
 */

char *_strdup(char *str) // str: pointeur vers la chaîne source à dupliquer
{
	char *dup;			 // Pointeur vers la nouvelle chaîne (la copie)
	unsigned int i, len; // i: compteur de boucle, len: longueur de la chaîne

	if (str == NULL) // Vérifie si le pointeur source est NULL
	{
		return (NULL); // Si oui, on ne peut rien dupliquer
	}
	len = 0;		 // Initialise la longueur
	while (str[len]) // Calcule la longueur de 'str' (s'arrête au '\0')
	{
		len++; // Incrémente la longueur
	}
	// Alloue de la mémoire : 'len' caractères + 1 espace pour le '\0' final
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL) // Vérifie si l'allocation (malloc) a échoué
	{
		return (NULL); // Retourne NULL pour signaler l'échec
	}
	// Boucle pour copier chaque caractère, y compris le '\0' (d'où i <= len)
	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i]; // Copie le caractère de 'str' vers 'dup'
	}
	return (dup); // Retourne le pointeur vers la nouvelle chaîne
}
