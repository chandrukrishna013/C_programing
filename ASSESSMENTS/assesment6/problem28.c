#include <stdio.h>

void disp_LCM2(int a, int b)
{
    int max = (a > b) ? a : b;

    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            printf("%d", max);
            break;
        }
        max++;
    }
}
