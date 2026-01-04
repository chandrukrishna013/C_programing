#include <stdio.h>

void disp_2digit_ones5()
{
    int i, sum = 0;

    for (i = 15; i <= 95; i = i + 10)
    {
        sum = sum + i;
    }

    printf("%d", sum);
}

int main()
{
    disp_2digit_ones5();
    return 0;
}
