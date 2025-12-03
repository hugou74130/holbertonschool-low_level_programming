#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The string containing bytes to find
 *
 * Return: A pointer to the first byte in s that matches one of the bytes
 *         in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
// Fonction qui cherche dans s le premier octet présent dans accept
{
	unsigned int i = 0;
	int j;

	while (s[i] != '\0') // Parcourt s caractère par caractère
	{
		j = 0;
		while (accept[j] != '\0') // Parcourt les caractères d'accept
		{
			if (s[i] == accept[j])
				return (&s[i]); // Retourne un pointeur sur s[i] si trouvé
			j++;
		}
		i++;
	}
	return (NULL); // Aucun caractère trouvé
}
