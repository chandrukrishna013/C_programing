#include <stdio.h>

void disp_single_digit_square()
{
    int n, d, c = 0;

    scanf("%d", &n);

    while (n > 0)
    {
        d = n % 10;
        if (d == 1 || d == 4 || d == 9)
            c++;
        n = n / 10;
    }

    printf("%d", c);
}

int main()
{
    disp_single_digit_square();
}
