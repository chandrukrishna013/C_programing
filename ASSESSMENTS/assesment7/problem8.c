#include <stdio.h>

void disp_interchange_first_last_digit()
{
    int n, first, last, temp, pow = 1;

    scanf("%d", &n);

    last = n % 10;
    temp = n;

    while (temp >= 10)
    {
        temp = temp / 10;
        pow = pow * 10;
    }

    first = temp;

    n = n - first * pow;
    n = n - last;
    n = n + last * pow;
    n = n + first;

    printf("%d", n);
}
