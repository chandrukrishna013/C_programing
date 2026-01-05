#include <stdio.h>

void disp_two_digit_square(int n)
{
    int count = 0;
    int num;

    while (n > 9)
    {
        num = n % 100;

        if (num == 16 || num == 25 || num == 36 ||
            num == 49 || num == 64 || num == 81)
            count++;

        n = n / 10;
    }

    printf("%d", count);
}
