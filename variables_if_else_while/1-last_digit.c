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
if (n > 5)
{
printf("and is greater than 5\n", n);
}
else if (n == 0)
{
printf("and is 0\n", n);
}
else
{
printf("and is less than 6 and not 0\n", n);
}
return (0);
}
