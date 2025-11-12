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

char *_strdup(char *str) // str est la chaine à dupliquer
{
	char *dup; // dup sert a 
	unsigned int i, len; // i sert a boucler, len est pour la longueur de la memoire

	if (str == NULL) // verification  de str 
		return (NULL);// sinon return NULL
	len = 0; // initialiser len a 0
	while (str[len])// faire une boucle et compter avec len 
		len++; // avancer len dans le tableau 
	dup = malloc((len + 1) * sizeof(char)); // 
	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		dup[i] = str[i];
	return (dup);
}
