#include <stdio.h>

/**
 * main - imprime un message sur la sortie d’erreur standard
 * Return: 1
 */

int main(void)
{
int n;
int j;
for (n = 0; n <= 98; n++)
{
for (j = n + 1; j <= 99; j++)
{
putchar(n / 10 + '0');
putchar(n % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (!(n == 98 && j == 99))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

