#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - Prints anything, depending on the format string.
 * @format: A list of types of arguments passed to the function.
 *
 * Description:
 * Format characters:
 *  'c' : char
 *  'i' : integer
 *  'f' : float
 *  's' : char * (prints "(nil)" if NULL)
 *
 * The function prints each argument according to the format provided.
 * Unsupported format characters are ignored.
 * A comma and space are printed between valid arguments.
 */

void print_all(const char *const format, ...)
{
	va_list args; // Création d'une liste pour stocker les arguments variables
	char c;		  // Pour stocker un caractère du format
	int i;		  // Compteur pour parcourir le tableau 'format'
	char *s;	  // Pointeur vers une chaîne de caractères

	va_start(args, format); // Initialisation de la liste d'arguments
	i = 0;					// Initialisation du compteur à 0

	while (format && format[i]) // Boucle tant que 'format' existe et que format[i] n'est pas nul
	{
		c = format[i]; // On récupère le caractère à la position i dans 'format'

		switch (c) // On teste le type à afficher
		{
		case 'c':							 // Si c correspond à un caractère
			printf("%c", va_arg(args, int)); // Affiche un caractère (promu en int)
			break;

		case 'i':							 // Si c correspond à un entier
			printf("%d", va_arg(args, int)); // Affiche un entier
			break;

		case 'f':								// Si c correspond à un flottant
			printf("%f", va_arg(args, double)); // Affiche un double (float est promu en double)
			break;

		case 's':					  // Si c correspond à une chaîne
			s = va_arg(args, char *); // On récupère un pointeur vers un char
			if (s == NULL)			  // Si la chaîne est NULL
				s = "(nil)";		  // On affiche (nil)
			printf("%s", s);		  // Sinon, on affiche la chaîne
			break;
		}

		i++; // On passe au caractère suivant du format

		// Ajout d'une virgule si l'élément affiché est valide et qu'il y a un autre format après
		if (format[i] && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
			printf(", ");
	}

	va_end(args); // Libère la liste d'arguments
	printf("\n"); // Affiche un saut de ligne à la fin
}
