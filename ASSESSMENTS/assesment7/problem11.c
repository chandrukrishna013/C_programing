#include <stdio.h>

int disp_total_odd_digits(int num)
{
    int count = 0;
    int digit;

    while (num > 0)
    {
        digit = num % 10;

        if (digit % 2 != 0)
        {
            count++;
        }

        num = num / 10;
    }

    return count;
}
