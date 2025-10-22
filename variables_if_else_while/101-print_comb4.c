#include <stdio.h>

/**
 * main - imprime un message sur la sortie d’erreur standard
 * Return: 1
 */

int main(void)
{
int n;
int j;
int l;
for (n = 0; n <= 8; n++)
{
for (j = n + 1; j <= 9; j++)
for (l = j + 1; l <= 9; l++)
{
putchar(n + '0');
putchar(j + '0');
putchar(l + '0');
if (!(n == 7 && j == 8 && l == 9))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
