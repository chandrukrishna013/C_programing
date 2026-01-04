#include <stdio.h>

void disp_2digit_odd_below20()
{
    int i;

    for (i = 11; i < 20; i = i + 2)
    {
        printf("%d\n", i);
    }
}

int main()
{
    disp_2digit_odd_below20();
    return 0;
}
