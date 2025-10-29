#include "main.h"

/**
 * leet - Encode une chaîne de caractères en “leet” (1337).
 * @s: Pointeur vers la chaîne à encoder.
 *
 * Cette fonction parcourt la chaîne de caractères et remplace certaines
 * lettres par des chiffres correspondants selon le style “leet” :
 *   - 'a' et 'A' deviennent '4'
 *   - 'e' et 'E' deviennent '3'
 *   - 'o' et 'O' deviennent '0'
 *   - 't' et 'T' deviennent '7'
 *   - 'l' et 'L' deviennent '1'
 *
 * Seuls ces caractères sont remplacés ; tous les autres restent inchangés.
 * La chaîne est modifiée in-place et la fonction retourne un pointeur vers elle.
 *
 * Return: Pointeur vers la chaîne modifiée.
 */

char *leet(char *s)
{
	int i = 0;
	int j;
	char letter[] = "aAeEoOtTlL";
	char number[] = "4433007711";
	{
		while (s[i] != '\0')
		{
			i++;
		}
		while (letter[j] != '\0')
			if (s[i] == letter[j])
				s[i] == number[j];
		{
			j++;
		}
	}
	return (s);
}
