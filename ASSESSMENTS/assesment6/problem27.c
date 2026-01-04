#include <stdio.h>

void disp_two_digit_square(long long n)
{
    int count = 0;
    int d;

    while (n > 0)
    {
        d = n % 100;

        if (d >= 10)
        {
            if (d == 16 || d == 25 || d == 36 || d == 49 || d == 64 || d == 81)
                count++;
        }

        n = n / 10;
    }

    printf("%d", count);
}
