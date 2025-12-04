#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints numbers from 0 to 9 (excluding 2 and 4)
 *
 * Description: Prints all single digits except 2 and 4,
 * followed by a new line, using _putchar
 * Return: void
 */
void print_most_numbers(void)
{
	int c; // Déclaration d’une variable entière 'c' qui servira à parcourir les chiffres

	c = '0'; // On initialise 'c' au caractère '0'

	while (c <= '9') // Boucle qui parcourt tous les caractères de '0' à '9'
	{
		if (c != '2' && c != '4') // Si le caractère n'est ni '2' ni '4'
			_putchar(c);		  // Alors on l'affiche grâce à _putchar
		c++;					  // On passe au caractère suivant
	}

	_putchar('\n'); // Après avoir affiché les chiffres, on ajoute un retour à la ligne
}
