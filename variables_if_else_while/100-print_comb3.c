#include <stdio.h>

/**
 * main - imprime un message sur la sortie d’erreur standard
 * Return: 1
 */

int main(void)
{
int n;
int j;
for (n = 0; n <= 8; n++)
{
for (j = n + 1; j <= 9; j++)
{
putchar(n + '0');
putchar(j + '0');
if (!(n == 8 && j == 9))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
