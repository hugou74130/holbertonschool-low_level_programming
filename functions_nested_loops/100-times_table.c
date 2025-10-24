#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to print
 *
 * Description: This function prints an integer number
 * recursively using the _putchar function.
 */

void print_number(int n)
{
if (n / 10)
print_number(n / 10);
_putchar((n % 10) + '0');
}

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The size of the times table (must be between 0 and 15)
 *
 * Description: Prints the multiplication table from 0 up to n,
 * formatted with commas and spaces so columns align properly.
 */

void print_times_table(int n)
{
int i, j, product;

if (n < 0 || n > 15)
return;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
product = i * j;

if (j == 0)
{
_putchar('0');
}
else
{
_putchar(',');
_putchar(' ');

if (product < 10)
{
_putchar(' ');
_putchar(' ');
}
else if (product < 100)
{
_putchar(' ');
}

print_number(product);
}
}
_putchar('\n');
}
}
