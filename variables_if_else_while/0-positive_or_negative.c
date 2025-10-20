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
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0);
printf("%d its positif\n")
else if (n < 0);
printf("%d its zero\n")
else
printf("%d is negative\n)
return (0);
}
