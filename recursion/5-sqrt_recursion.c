#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 * @i: The current number to test (starts at 0)
 *
 * Return: The natural square root if it exists, -1 otherwise
 */
int _sqrt_recursion(int n, int i)
{
	if (n < 0)
		return (-1);
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_recursion(n, i + 1));
}
