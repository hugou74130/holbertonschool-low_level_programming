#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by a new line
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 *
 * Description: Prints n strings followed by a new line.
 * If separator is NULL, it is not printed.
 * If a string is NULL, it prints "(nil)" instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;	// Liste pour sauvegarder les arguments
	unsigned int i; // Compteur pour la boucle
	char *str;		// Pointeur sur chaque string

	va_start(args, n); // Initialise la boîte à partir de n

	for (i = 0; i < n; i++) // Parcourt n arguments
	{
		str = va_arg(args, char *); // Récupère chaque argument (string)

		if (str == NULL) // Si la string est NULL
			printf("(nil)");
		else // Sinon affiche la string
			printf("%s", str);

		// Affiche le séparateur entre les strings (sauf après la dernière)
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args); // Libère la liste
	printf("\n"); // Saut de ligne à la fin
}
