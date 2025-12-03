#include "main.h"
#include <stdio.h>

/**
* print_numbers - prints the numbers from 0 to 9
*
* Return: void
*/

void print_numbers(void)
// Fonction qui affiche les chiffres de 0 à 9
{
	int i;

	for (i = '0'; i <= '9'; i++) // Parcourt les caractères ASCII de '0' à '9'
	{
		_putchar(i); // Affiche chaque chiffre
	}
	_putchar('\n'); // Termine par un saut de ligne
}
