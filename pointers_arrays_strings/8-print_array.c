#include "main.h"

void print_array(int *a, int n)
{

	for (int i = 0; i < n; i++)
	{
		_putchar(a[i] + '0'); // Convert integer to character
		if (i < n - 1)
		{
			_putchar(','); // Print comma between elements
			_putchar(' '); // Print space after comma
		}
	}
	_putchar('\n'); // Print newline at the end
}
