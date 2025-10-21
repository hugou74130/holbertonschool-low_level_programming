#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to check
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
    int last_digit;

    last_digit = n % 10;      /* Récupère le reste de la division par 10 */

    if (last_digit < 0)       /* Si le nombre est négatif */
        last_digit = -last_digit; /* On le rend positif */

    _putchar(last_digit + '0'); /* Affiche le chiffre correspondant en ASCII */

    return (last_digit);      /* Retourne la valeur du dernier chiffre */
}

