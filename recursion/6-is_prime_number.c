#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - Returns 1 if the input integer is a prime number
 * @n: The number to check
 * @i: The divisor to test (starts at 2)
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n, int i)
{
	if (n < 2)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_number(n, i + 1));
}
