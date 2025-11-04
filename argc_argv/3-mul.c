#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Description: Multiplies two integer numbers passed as command line arguments
 * and prints the result. If the number of arguments is incorrect, prints "Error"
 * and returns 1.
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int sum1;
	int sum2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	sum1 = atoi(argv[1]);
	sum2 = atoi(argv[2]);
	result = sum1 * sum2;
	printf("%d\n", result);
	return (0);
}
