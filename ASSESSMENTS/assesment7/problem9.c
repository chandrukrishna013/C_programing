#include <stdio.h>

void check_last_digit_odd()
{
    int n, last;

    scanf("%d", &n);

    last = n % 10;

    if (last % 2 == 0)
    {
        printf("%d", n);
    }
    else
    {
        n = n - 1;
        printf("%d", n);
    }
}
