#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 *        with Fizz for multiples of 3,
 *        Buzz for multiples of 5, and
 *        FizzBuzz for multiples of both 3 and 5
 *
 * Return: Always 0
 */
int main(void)
{
	int i;					   // declare la variable i
	for (i = 1; i <= 100; i++) // genere la suite de nombre de 1 a 100 inclus
	{
		if (i % 3 == 0 && i % 5 == 0) // si
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
