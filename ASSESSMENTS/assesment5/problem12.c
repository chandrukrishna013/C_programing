#include <stdio.h>

int main()
{
    int num, mid, i, prime = 1;

    scanf("%d", &num);

    mid = (num / 10) % 100;

    if (mid <= 1)
        prime = 0;

    for (i = 2; i * i <= mid && prime; i++)
    {
        if (mid % i == 0)
            prime = 0;
    }

    if (prime)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
