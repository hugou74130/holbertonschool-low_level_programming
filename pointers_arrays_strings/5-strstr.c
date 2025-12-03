#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to find
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
// Fonction qui cherche la première occurrence de needle dans haystack
{
	unsigned int i;
	unsigned int j;

	i = 0;
	if (needle[0] == '\0')
		return (haystack); // Si needle est vide, retourne haystack
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
			j++; // Parcourt needle et haystack en parallèle
		if (needle[j] == '\0')
			return (&haystack[i]); // Si fin de needle atteinte, retourne pointeur
		i++; // Passe au caractère suivant
	}
	return (NULL); // Retourne NULL si needle absent
}
