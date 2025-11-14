#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */

void jack_bauer(void)
{
	// Déclare deux variables entières pour compter les heures et les minutes.
	int hour, minute;

	// Boucle externe : itère sur les HEURES.
	// Elle s'exécute pour hour = 0, 1, 2, ..., jusqu'à 23.
	for (hour = 0; hour < 24; hour++)
	{
		// Boucle interne : pour CHAQUE heure, itère sur les MINUTES.
		// Elle s'exécute pour minute = 0, 1, 2, ..., jusqu'à 59.
		for (minute = 0; minute < 60; minute++)
		{
			// Affiche le chiffre des DIZAINES de l'heure.
			// (hour / 10) donne le 1er chiffre (ex: 14 / 10 = 1).
			// (+ '0') convertit l'entier (1) en caractère ('1').
			_putchar((hour / 10) + '0'); /* dizaine d'heure */

			// Affiche le chiffre des UNITÉS de l'heure.
			// (hour % 10) donne le 2ème chiffre (ex: 14 % 10 = 4).
			// (+ '0') convertit l'entier (4) en caractère ('4').
			_putchar((hour % 10) + '0'); /* unité d'heure */

			// Affiche le séparateur deux-points.
			_putchar(':');

			// Affiche le chiffre des DIZAINES de la minute.
			// (minute / 10) donne le 1er chiffre (ex: 38 / 10 = 3).
			_putchar((minute / 10) + '0'); /* dizaine de minute */

			// Affiche le chiffre des UNITÉS de la minute.
			// (minute % 10) donne le 2ème chiffre (ex: 38 % 10 = 8).
			_putchar((minute % 10) + '0'); /* unité de minute */

			// Affiche un saut de ligne pour passer à la minute suivante.
			_putchar('\n');
		} // Fin de la boucle 'minute'
	} // Fin de la boucle 'hour'
} // Fin de la fonction 'jack_bauer'
