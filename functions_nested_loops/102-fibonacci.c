#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 0 and 1
 *
 * Return: 0 on success
 */

int main(void)
{
long  a = 1, b = 2, c;
int i;
for (i = 2; i < 50; i++)
{
printf("%ld, ", a);
c = a + b;
a = b;
b = c;
}
return (0);
}
