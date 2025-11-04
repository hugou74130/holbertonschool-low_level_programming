#include <stdio.h>
#include "main.h"

int _sqrt_recursion(int n, int i)
{
	if (n < '\0')
		return (-1);
	if (i * i > n)
		return (1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(i, n + 1));
}
