#include <stdio.h>

void disp_total_2digit_odd()
{
    int n, p, c = 0;

    scanf("%d", &n);

    while (n >= 10)
    {
        p = n % 100;
        if (p % 2 == 1)
            c++;
        n = n / 10;
    }

    printf("%d", c);
}

int main()
{
    disp_total_2digit_odd();
}
