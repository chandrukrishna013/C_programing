#include <stdio.h>

void disp_2digit_odd_sum_tens7()
{
    int i, sum = 0;

    for (i = 71; i <= 79; i = i + 2)
    {
        sum = sum + i;
    }

    printf("%d", sum);
}

int main()
{
    disp_2digit_odd_sum_tens7();
    return 0;
}
