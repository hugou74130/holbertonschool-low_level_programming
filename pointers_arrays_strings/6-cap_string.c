#include "main.h"

/**
 * cap_string - Met en majuscule
 * @s: Pointeur vers la chaîne de caractères à modifier.
 *
 * Cette fonction parcourt la chaîne et convertit en majuscule
 * chaque lettre qui suit un séparateur de mots.
 * Les séparateurs considérés sont : espace, tabulation, saut de ligne,
 * virgule, point-virgule, point, point d’exclamation,
 * guillemets, parenthèses et accolades.
 *
 * Return: Pointeur vers la chaîne modifiée.
 */

char *cap_string(char *s)
{
	int i = 0;
	int new_word = 1;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
			s[i] == ',' || s[i] == ';' || s[i] == '.' ||
			s[i] == '!' || s[i] == '?' || s[i] == '"' ||
			s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			new_word = 1;
		}
		else if (new_word == 1 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
			new_word = 0;
		}
		else
		{
			new_word = 0;
		}
		i++;
	}

	return (s);
}
