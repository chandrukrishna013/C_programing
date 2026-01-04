#include <stdio.h>

int lcm(int a, int b)
{
    int max = (a > b) ? a : b;

    while (1)
    {
        if (max % a == 0 && max % b == 0)
            return max;
        max++;
    }
}

void disp_LCM3(int a, int b, int c)
{
    int result = lcm(a, b);
    result = lcm(result, c);

    printf("%d", result);
}
