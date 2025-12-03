#include "main.h"

/**
* more_numbers - prints 10 times the numbers from 0 to 14,
*                followed by a new line
*
* You can only use _putchar three times
*/

void more_numbers(void)
// Fonction qui affiche 10 fois les nombres de 0 à 14
{
	int i, j;

	for (i = 0; i < 10; i++) // Boucle pour répéter 10 fois
	{
		for (j = 0; j <= 14; j++) // Boucle de 0 à 14
		{
			if (j >= 10)
				_putchar((j / 10) + '0'); // Affiche la dizaine si j >= 10
			_putchar((j % 10) + '0'); // Affiche l’unité
		}
		_putchar('\n'); // Saut de ligne après chaque série
	}
}
