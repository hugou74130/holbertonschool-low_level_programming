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
// Fonction qui cherche la première occurrence de c dans la chaîne s
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0') // Parcourt toute la chaîne
	{
		if (s[i] == c)
			return (&s[i]); // Si trouvé, retourne l'adresse du caractère
		i++;
		if (s[i] == c)
			return (&s[i]); // Vérifie aussi après incrément, pour couverture
	}
	return (NULL); // Retourne NULL si caractère non trouvé
}
