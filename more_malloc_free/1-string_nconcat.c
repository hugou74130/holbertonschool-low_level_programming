#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes of s2 to concatenate
 *
 * Description: This function concatenates two strings. It returns a pointer
 * to a newly allocated space in memory, which contains s1 followed by the
 * first n bytes of s2, and null terminated. If n is greater than or equal
 * to the length of s2, the entire string s2 is used. If NULL is passed,
 * it is treated as an empty string.
 *
 * Return: Pointer to the new concatenated string, or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
// Fonction qui concatène deux chaînes avec n caractères de s2 maximum
{

	unsigned int len2, len1, total_len;
	char *result;
	unsigned int i;
	if (s1 == NULL)
		s1 = ""; // Si s1 est NULL, on la considère comme une chaîne vide
	if (s2 == NULL)
		s2 = ""; // Idem pour s2
	len1 = 0;
	while (s1[len1] != '\0')
		len1++; // Calcule la longueur de s1
	len2 = 0;
	while (s2[len2] != '\0')
		len2++; // Calcule la longueur de s2
	if (n >= len2)
		total_len = len1 + len2; // Si n est plus grand, on prend tout s2
	else
		total_len = len1 + n; // Sinon, on ne prend que n caractères de s2
	result = malloc(sizeof(char) * (total_len + 1)); // Alloue la mémoire résultat
	if (result == NULL)
		return (NULL); // Retourne NULL en cas d'échec
	i = 0;
	while ((s1[i] != '\0'))
	{
		result[i] = s1[i]; // Copie s1 dans result
		i++;
	}
	i = 0;
	while (i < n && s2[i] != '\0')
	{
		result[len1 + i] = s2[i]; // Copie jusque n caractères de s2
		i++;
	}
	result[len1 + i] = '\0'; // Termine la chaîne par \0
	return (result); // Retourne la nouvelle chaîne allouée
}
