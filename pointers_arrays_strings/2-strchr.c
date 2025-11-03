#include <stdio.h>

/**
 * _strchr - Localise un caractère dans une chaîne
 * @s: Pointeur sur la chaîne à parcourir
 * @c: Le caractère à localiser
 *
 * Description: Cette fonction recherche la première occurrence du
 * caractère c dans la chaîne s.
 *
 * Retour: Pointeur sur la première occurrence
 * de c dans s, ou NULL si non trouvé
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
