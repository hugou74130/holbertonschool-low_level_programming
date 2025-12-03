#include "main.h"

/**
 * leet - Encode une chaîne de caractères en “leet” (1337).
 * @s: Pointeur vers la chaîne à encoder.
 *
 * Cette fonction parcourt la chaîne et remplace certaines lettres
 * par des chiffres selon le style “leet”.
 *
 * Return: Pointeur vers la chaîne modifiée.
 */

char *leet(char *s)
// Fonction qui encode la chaîne s en "leet" (1337)
{
	int i = 0, j;
	char letter[] = "aAeEoOtTlL";
	char number[] = "4433007711";

	while (s[i] != '\0') // Parcourt la chaîne
	{
		j = 0;
		while (letter[j] != '\0') // Parcourt chaque caractère ciblé pour conversion
		{
			if (s[i] == letter[j]) // Si la lettre doit être transformée
				s[i] = number[j]; // Remplace par l'équivalent numérique
			j++;
		}
		i++;
	}
	return (s); // Retourne la chaîne encodée
}
