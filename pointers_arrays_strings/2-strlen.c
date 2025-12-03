#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */

int _strlen(char *s)
// Fonction qui retourne la longueur d'une chaîne s
{
	int length = 0;
	while (s[length] != '\0') // Parcourt la chaîne jusqu'à la fin
	{
		length++; // Incrémente à chaque caractère
	}
	return (length); // Retourne la longueur
}
