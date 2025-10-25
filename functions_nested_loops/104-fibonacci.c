#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 on success
 */

int main(void)
{
int count;
unsigned long a = 1, b = 2, a1, a2, b1, b2, t1, t2;
unsigned long limit = 1000000000;

printf("%lu, %lu", a, b);

for (count = 3; count <= 98; count++)
{
if (b < limit)
{
t1 = a;
a = b;
b = t1 + b;
printf(", %lu", b);
}
else
{
a1 = a / limit;
a2 = a % limit;
b1 = b / limit;
b2 = b % limit;

t1 = a1;
t2 = a2;
a1 = b1;
a2 = b2;

b1 = t1 + b1;
b2 = t2 + b2;
if (b2 >= limit)
{
b1 += 1;
b2 -= limit;
}

printf(", %lu%09lu", b1, b2);
}
}

printf("\n");
return (0);
}

