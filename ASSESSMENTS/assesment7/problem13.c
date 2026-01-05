#include <stdio.h>

void disp_single_digit_square(int n)
{
    int count = 0;
    int d;

    while (n > 0)
    {
        d = n % 10;

        if (d == 0 || d == 1 || d == 4 || d == 9)
            count++;

        n = n / 10;
    }

    printf("%d", count);
}
