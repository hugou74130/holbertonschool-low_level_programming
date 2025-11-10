#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatène deux chaînes de caractères
 * @s1: Première chaîne
 * @s2: Deuxième chaîne
 *
 * Alloue une nouvelle chaîne contenant les caractères de s1
 * suivis des caractères de s2. Si s1 ou s2 est NULL, elle est
 * traitée comme une chaîne vide.
 *
 * Return: Pointeur vers la nouvelle chaîne allouée, NULL en cas d'erreur
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *result;
	size_t i;

	len1 = 0;
	if (s1)
	{
		while (s1[len1])

			len1++;
	}
	len2 = 0;
	if (s2)
	{
		while (s2[len2])

			len2++;
	}

	result = malloc(len1 + len2 + 1);
	if (result == NULL)

		return (NULL);

	i = 0;
	if (s1)
	{
		while (s1[i])
		{
			result[i] = s1[i];
			i++;
		}
	}

	i = 0;
	if (s2)
	{
		while (s2[i])
		{
			result[len1 + i] = s2[i];
			i++;
		}
	}

	result[len1 + len2] = '\0';

	return (result);
}
