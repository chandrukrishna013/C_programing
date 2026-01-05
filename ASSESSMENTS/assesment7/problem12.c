#include <stdio.h>

void disp_total_2digit_odd(int n)
{
    int count = 0;
    int d1, d2;

    while (n > 9)
    {
        d1 = n % 10;
        d2 = (n / 10) % 10;

        if (((d2 * 10 + d1) % 2 != 0))
            count++;

        n = n / 10;
    }

    printf("%d", count);
}
