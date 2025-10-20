#include <stdio.h>

/**
 * main - point d'entrée du programme
 *
 * Return: 0 si succès
 */


int main(void)
{
int i, j;

for (i = 0; i <= 8; i++)
{
for (j = i + 1; j <= 9; j++)
{
putchar(i + '0');
putchar(j + '0');
putchar((i != 8 || j != 9) ? ',' : ' ');
putchar((i != 8 || j != 9) ? ' ' : '\n');
}
}
return (0);
}

