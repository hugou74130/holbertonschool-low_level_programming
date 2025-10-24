#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
 */

void print_times_table(int n)
{
int i, j;

if (n < 0 || n > 15)
return;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int result = i * j;
if (j == 0)
printf("%d", result);
else
printf(",%4d", result);
}
printf("\n");
}
}
int main (void)
{
print_times_table(3);
putchar('\n');
print_times_table(5);
putchar('\n');
print_times_table(98);
putchar('\n');
print_times_table(12);  
return (0);
}

