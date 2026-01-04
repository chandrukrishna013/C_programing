#include <stdio.h>

void disp_total_odd_digits()
{
    int n, d, c = 0;

    scanf("%d", &n);

    while (n > 0)
    {
        d = n % 10;
        if (d % 2 == 1)
            c++;
        n = n / 10;
    }

    printf("%d", c);
}

int main()
{
    disp_total_odd_digits();
}
