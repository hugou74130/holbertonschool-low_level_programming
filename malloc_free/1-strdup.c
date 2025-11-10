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

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len])
		len++;
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		dup[i] = str[i];
	return (dup);
}
