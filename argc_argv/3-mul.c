#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int sum1;
	int sum2;
	int result;
	{
		if (argc != 3)
			printf("Error");
		return (1);
	}
	sum1 = atoi(argv[1]);
	sum2 = atoi(argv[2]);
	result = sum1 * sum2;
	printf("%d\n", result);
	return (0);
}
