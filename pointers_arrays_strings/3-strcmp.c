#include "main.h"

/**
 * _strcmp - Compare deux chaînes de caractères (s1 et s2)
 * lexicographiquement (ordre alphabétique).
 * @s1: La première chaîne à comparer.
 * @si2: La deuxième chaîne à comparer.
 *
 * Return: Un entier indiquant la relation entre les chaînes:
 * - 0 si s1 est égal à si2.
 * - Une valeur négative si s1 est inférieure à si2.
 * - Une valeur positive si s1 est supérieure à si2.
 */

int _strcmp(char *s1, char *si2)
{
	int i = 0;

	while (s1[i] != '\0' && si2[i] != '\0')
	{
		if (s1[i] != si2[i])
		{
			return (s1[i] - si2[i]);
		}
		i++;
	}
	return (s1[i] - si2[i]);
}
