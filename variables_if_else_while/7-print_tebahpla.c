#include <stdio.h>

/**
 * main - imprime l'alphabet en minuscule à l'envers
 *
 * Return: 0 si succès
 */

int main(void)
{
char c;

for (c = 'z'; c >= 'a'; c--)
putchar(c);

putchar('\n');
return (0);
}
