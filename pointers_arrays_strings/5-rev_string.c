#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
// Fonction qui inverse une chaîne de caractères (modifie sur place)
{
	int len = 0, i;
	char temp;
	// Calcul de la longueur de la chaîne
	while (s[len] != '\0')
		len++;
	// On échange les caractères des deux extrémités l'un après l'autre
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i]; // Sauvegarde l'élément courant
		s[i] = s[len - i - 1]; // Remplace avec celui de la fin
		s[len - i - 1] = temp; // Met la sauvegarde à la fin
	}
}
