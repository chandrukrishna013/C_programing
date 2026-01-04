#include <stdio.h>

void disp_single_digit_prime(int n)
{
    int count = 0;
    int d;

    while (n > 0)
    {
        d = n % 10;

        if (d == 2 || d == 3 || d == 5 || d == 7)
        {
            count++;
        }

        n = n / 10;
    }

    printf("%d", count);
}
