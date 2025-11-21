#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: pointer to the string
 *
 * Description: This function calculates the length of a string
 * using recursion. It counts each character until it reaches
 * the null terminator ('\0').
 *
 * Return: The length of the string (int)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0') // vérifie si le caractère pointé par s est le caractère de fin de chaîne
		return (0); // si c’est la fin de la chaîne, on retourne 0

	return (1 + _strlen_recursion(s + 1)); // on avance d'un caractère et on additionne 1 à chaque appel récursif
}
