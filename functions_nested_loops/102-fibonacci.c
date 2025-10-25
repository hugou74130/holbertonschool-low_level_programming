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
printf("%ld, %ld", a, b);

for (i = 2; i < 50; i++)
{
c = a + b;
printf(",%ls", c);
a = b;
b = c;
}
printf("\n");
return (0);
}
