#include <stdio.h>

/**
 * _strchr - Trouve la première occurrence d'un caractère dans une chaîne
 * @s: Pointeur sur la chaîne à parcourir
 * @c: Le caractère à localiser
 *
 * Description: Recherche le caractère c dans la chaîne de caractères s
 * en parcourant chaque élément jusqu'à trouver une correspondance ou
 * atteindre la fin de la chaîne.
 *
 * Return: Pointeur vers le caractère trouvé, ou NULL si absent
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)

			return (&s[i]);
		i++;

		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
