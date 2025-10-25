#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 on success
 */
int main(void)
{
    int i;
    unsigned long a = 1, b = 2, a_head, a_tail, b_head, b_tail;
    unsigned long head, tail;
    unsigned long limit = 1000000000;

    printf("%lu, %lu", a, b);

    for (i = 2; i < 98; i++)
    {
        if (b < limit)
        {
            head = 0;
            tail = a + b;
        }
        else
        {
            a_head = a / limit;
            a_tail = a % limit;
            b_head = b / limit;
            b_tail = b % limit;

            head = a_head + b_head + (a_tail + b_tail) / limit;
            tail = (a_tail + b_tail) % limit;
        }

        if (head > 0)
            printf(", %lu%09lu", head, tail);
        else
            printf(", %lu", tail);

        a = b;
        b = head * limit + tail;
    }

    printf("\n");
    return (0);
}

