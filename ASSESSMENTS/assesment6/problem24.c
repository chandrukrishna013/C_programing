#include <stdio.h>

void disp_two_digit_square(int n)
{
    int count = 0;
    int d1, d2, num;

    while (n > 9)
    {
        d1 = n % 10;
        d2 = (n / 10) % 10;
        num = d2 * 10 + d1;

        if (num == 16 || num == 25 || num == 36 || num == 49 ||
            num == 64 || num == 81)
        {
            count++;
        }

        n = n / 10;
    }

    printf("%d", count);
}
