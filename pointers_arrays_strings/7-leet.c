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
{
	int i = 0, j;
	char letter[] = "aAeEoOtTlL";
	char number[] = "4433007711";

	while (s[i] != '\0')
	{
		j = 0;
		while (letter[j] != '\0')
		{
			if (s[i] == letter[j])
				s[i] = number[j];
			j++;
		}
		i++;
	}

	return s;
}
