#include <stdio.h>

int main()
{
    int num, lastTwo, i, prime = 1;

    scanf("%d", &num);

    lastTwo = num % 100;

    if (lastTwo <= 1)
        prime = 0;

    for (i = 2; i * i <= lastTwo && prime; i++)
    {
        if (lastTwo % i == 0)
            prime = 0;
    }

    if (prime)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
