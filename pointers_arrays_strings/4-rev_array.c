#include "main.h"
#include <stdio.h>

void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;
	{
		for (i = 0; i < n / 2; i++)

		{
			temp = a[i];
			a[i] = a[n - 1 - i];
			a[n - 1 - i] = temp;
		}
	}
}
