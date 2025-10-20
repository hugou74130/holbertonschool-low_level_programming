#include <stdio.h>

/**
 * main - point d'entrée du programme
 *
 * Return: 0 si succès
 */

int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
putchar(c);
for (c = 'A'; c <= 'Z'; c++)
putchar(c);

putchar(\n);

return (0);
}
