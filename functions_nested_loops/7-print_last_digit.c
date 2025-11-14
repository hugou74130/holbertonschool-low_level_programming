#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to check
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	// Déclare une variable pour stocker le dernier chiffre.
	int last_digit;

	// Calcule le dernier chiffre en utilisant l'opérateur modulo (%).
	// (ex: 123 % 10 = 3)
	// Si 'n' est négatif (ex: -123), 'last_digit' sera aussi négatif (ex: -3).
	last_digit = n % 10;

	// Vérifie si le dernier chiffre est négatif.
	if (last_digit < 0)
	{
		// Si oui, le convertit en sa valeur positive (valeur absolue).
		// (ex: -3 devient 3)
		last_digit = -last_digit;
		// ou last_digit = last_digit * -1;
	}

	// Affiche le dernier chiffre à l'écran.
	// (last_digit + '0') convertit l'entier (ex: 3) en caractère (ex: '3')
	// pour que _putchar puisse l'imprimer.
	_putchar(last_digit + '0');

	// Retourne la valeur entière du dernier chiffre (ex: 3)
	// à l'endroit où la fonction a été appelée.
	return (last_digit);
}
