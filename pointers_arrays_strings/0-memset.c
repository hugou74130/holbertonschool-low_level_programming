#include <stdio.h>

/**
 * _memset - Remplit la mémoire avec une constante donnée.
 * @s: Pointeur vers la zone mémoire à remplir.
 * @b: Valeur constante à copier
 * dans la mémoire (interprétée comme un char).
 * @n: Nombre d’octets de la mémoire à remplir.
 *
 * Description: Cette fonction remplit
 * les `n` premiers octets
 * de la zone mémoire pointée par `s` avec la valeur constante `b`.
 *
 * Return: Un pointeur vers la zone mémoire `s`.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i; // Déclare une variable i

	// Boucle : part de i = 0 et continue tant que i < n
	for (i = 0; i < n; i++)
		s[i] = b; // Remplace chaque caractère de s par b pour les n premiers octets

	return (s); // Retourne le pointeur s
}
