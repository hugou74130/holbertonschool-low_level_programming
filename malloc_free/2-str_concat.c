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
	size_t len1;  // Variable pour stocker la longueur de s1
	size_t len2;  // Variable pour stocker la longueur de s2
	char *result; // Pointeur vers la nouvelle chaîne (résultat)
	size_t i;	  // Compteur pour les boucles de copie

	len1 = 0; // Initialise la longueur de s1
	if (s1)	  // Vérifie si s1 n'est PAS NULL avant de calculer sa longueur
	{
		while (s1[len1]) // Calcule la longueur de s1
			len1++;		 // Incrémente le compteur
	}

	len2 = 0; // Initialise la longueur de s2
	if (s2)	  // Vérifie si s2 n'est PAS NULL
	{
		while (s2[len2]) // Calcule la longueur de s2
			len2++;		 // Incrémente le compteur
	}

	// Alloue la mémoire : len1 + len2 + 1 octet pour le terminateur nul '\0'
	result = malloc(len1 + len2 + 1);

	if (result == NULL) // Vérifie si l'allocation mémoire a échoué
		return (NULL);	// Si oui, retourne NULL

	i = 0;	// Initialise le compteur pour la copie
	if (s1) // Si s1 n'est pas NULL, on le copie
	{
		while (s1[i]) // Boucle pour copier s1
		{
			result[i] = s1[i]; // Copie le caractère
			i++;			   // Avance l'index de destination ET de source
		}
	}

	i = 0;	// Réinitialise le compteur pour copier s2 (très important !)
	if (s2) // Si s2 n'est pas NULL, on le copie
	{
		while (s2[i]) // Boucle pour copier s2
		{
			// La destination est [len1 + i] pour copier *après* la fin de s1
			result[len1 + i] = s2[i];
			i++; // Avance l'index (pour s2)
		}
	}

	// Ajoute le terminateur nul à la toute fin de la nouvelle chaîne
	result[len1 + len2] = '\0';

	return (result); // Retourne le pointeur vers la mémoire allouée
}
