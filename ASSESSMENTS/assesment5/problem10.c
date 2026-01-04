#include <stdio.h>

int main()
{
    int num, temp, sum = 0, i, prime = 1;

    scanf("%d", &num);

    if (num <= 1)
        prime = 0;

    for (i = 2; i * i <= num && prime; i++)
    {
        if (num % i == 0)
            prime = 0;
    }

    temp = num;
    while (temp != 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    if (prime && sum == 14)
        printf("Prime & sum of digits is 14");
    else if (!prime && sum == 14)
        printf("Not Prime but sum of digits is 14");
    else if (prime && sum != 14)
        printf("Prime & sum of digits is not 14");
    else
        printf("Not Prime & sum of digits is not 14");

    return 0;
}
