#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 on success
 */
int main(void)
{
int count;
unsigned long a = 1, b = 2, a1, a2, b1, b2, carry;
unsigned long limit = 1000000000;

printf("%lu, %lu", a, b);

for (count = 3; count <= 98; count++)
{
if (b + a < limit)
{
b = b + a;
a = b - a;
printf(", %lu", b);
}
else
{

a1 = a / limit;
a2 = a % limit;
b1 = b / limit;
b2 = b % limit;

carry = (a2 + b2) / limit;
b1 = a1 + b1 + carry;
b2 = (a2 + b2) % limit;

a = b;
a1 = b1;
a2 = b2;

 printf(", %lu%09lu", b1, b2);
}
}

printf("\n");
return (0);
}

