#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root if it exists, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - Helper function to find square root recursively
 * @n: The number to find the square root of
 * @i: The current number to test
 *
 * Return: The natural square root if it exists, -1 otherwise
 */
int _sqrt_helper(int n, int i)
{
	if (n < 0)
		return (-1);
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}
