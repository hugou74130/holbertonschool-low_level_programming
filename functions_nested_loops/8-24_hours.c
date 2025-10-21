#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */

void jack_bauer(void)
{
int hour, minute;

for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
_putchar((hour / 10) + '0');   /* dizaine d'heure */
_putchar((hour % 10) + '0');   /* unité d'heure */
_putchar(':');
_putchar((minute / 10) + '0'); /* dizaine de minute */
_putchar((minute % 10) + '0'); /* unité de minute */
_putchar('\n');
}
}
}
