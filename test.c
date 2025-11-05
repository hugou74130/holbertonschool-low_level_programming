#include <stdio.h>

char main(void)
{
	char i = 'a';
	while (i <= 'z')

		printf("%c, ", i++);
	printf("\n");
	return (0);
}
