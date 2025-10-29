#include "main.h"

/**
 * string_toupper - Convertit toutes les lettres minuscules d'une chaîne
 * de caractères en majuscules.
 * @s: Pointeur vers la chaîne de caractères qui sera modifiée in-place.
 *
 * Cette fonction parcourt la chaîne caractère par caractère et, si
 * un caractère se trouve dans la plage 'a' à 'z', elle lui soustrait 32
 * (selon la table ASCII) pour obtenir son équivalent majuscule.
 *
 * Retourne: char * - Le pointeur vers la chaîne modifiée
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}

	return (s);
}
