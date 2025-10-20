#include <stdio.h>

/**
 * main - affiche tous les chiffres de base 16 en minuscules
 *
 * Return: 0 si succès
 */

int main(void)
{
int n;

for (n = 0; n < 10; n++)
putchar(n + '0');

for (n = 'a'; n <= 'f'; n++)
putchar(n);

putchar('\n');
return (0);
}

