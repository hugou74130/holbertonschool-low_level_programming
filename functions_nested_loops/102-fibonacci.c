#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 0 and 1
 *
 * Return: 0 on success
 */

int main (void)
{
int  a = 0, b = 1,c;
int i;

for (i = 0; i < 50; i++)
{
printf("%d\n", a);
c = a + b;
a = b;
b = c;
}
return (0);
}
