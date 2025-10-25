#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued Fibonacci terms
 *        whose values do not exceed 4,000,000
 *
 * Return: 0 on success
 */

int main(void)
{
long a = 1, b = 2, c, sum = 0;

while (b <= 4000000)
{
if (b % 2 == 0)
sum += b;

c = a + b;
a = b;
b = c;
}

printf("%ld\n", sum);
return (0);
}
