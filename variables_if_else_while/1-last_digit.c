#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - point d'entrée du programme
 *
 * Return: 0 si succès
 */

int main(void)
{
int n;
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
if (last_digit < 0)
last_digit *= -1;
printf("Last digit of %d is %d", n, last_digit);
if (last_digit > 5)
{
printf("Last digit of %d is %d and is greater than 5 \n", last_digit, n);
}
else if (last_digit == 0)
{
printf("Last digit of %d is %d ans is 0\n", last_digit, n);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", last_digit, n);
}
return (0);
}
