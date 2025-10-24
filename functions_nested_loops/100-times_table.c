#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer using only _putchar
 * @n: number to print
 */

void print_number(int n)
{
    if (n / 10)
        print_number(n / 10);
    putchar((n % 10) + '0');
}


void print_times_table(int n)
{
    int i, j, result;

    if (n < 0 || n > 15)
        return;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            result = i * j;

            if (j == 0)
                print_number(result);
            else
            {
                putchar(',');
                putchar(' ');

                if (result < 10)
                {
                    putchar(' ');
                    putchar(' ');
                    print_number(result);
                }
                else if (result < 100)
                {
                    putchar(' ');
                    print_number(result);
                }
                else
                {
                    print_number(result);
                }
            }
        }
        putchar('\n');
    }
}

int main(void)
{
    print_times_table(3);
    return (0);
}

