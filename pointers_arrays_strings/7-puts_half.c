#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to be processed
 *
 * Description: This function prints the second half of a string.
 * If the number of characters is odd, it prints the last
 */
void puts_half(char *str)
// Fonction qui affiche la seconde moitié d'une chaîne (en cas d'impair, saute le premier du deuxième groupe)
{
	int len = 0, i, start;

	/* Calcul de la longueur de la chaîne */
	while (str[len] != '\0')
		len++;

	/* Calcule l'indice à partir duquel commencer à afficher */
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	/* Affiche le second segment de la chaîne */
	for (i = start; i < len; i++)
	{
		_putchar(str[i]); // Affiche le caractère à l'index courant
	}
	_putchar('\n'); // Saut de ligne
}
