#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers separated by a given separator
 * @separator: The string to use as separator between numbers
 * @n: The number of integers passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list args;	// Liste pour sauvegarder les arguments
	unsigned int i; // Compteur pour la boucle
	int num;		// Stockage de chaque entier

	va_start(args, n); // Initialise la boîte à partir de n

	for (i = 0; i < n; i++) // Parcourt n arguments
	{
		num = va_arg(args, int); // Récupère chaque argument
		printf("%d", num);

		// Affiche le séparateur entre les nombres (sauf après le dernier)
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args); // Libère la liste
	printf("\n"); // Saut de ligne à la fin
}
