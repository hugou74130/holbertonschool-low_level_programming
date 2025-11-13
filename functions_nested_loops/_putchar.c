#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1, on error -1.
 */
int _putchar(char c)
{
	// Appelle 'write' pour écrire 1 octet (le 3e arg)
	// de la variable 'c' (dont on donne l'adresse, &c, le 2e arg)
	// vers la sortie standard (stdout, le 1er arg)
	return write(1, &c, 1);
}
