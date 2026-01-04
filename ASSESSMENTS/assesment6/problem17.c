#include <stdio.h>

void check_prime_and_sum14()
{
    int num, i, temp, sum = 0, prime = 1;

    scanf("%d", &num);

    // Prime check
    if (num <= 1)
        prime = 0;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
    }

    // Sum of digits
    temp = num;
    while (temp > 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }

    if (prime && sum == 14)
        printf("Prime & sum of digits is 14");
    else if (!prime && sum == 14)
        printf("Not Prime but sum of digits is 14");
    else if (prime && sum != 14)
        printf("Prime & sum of digits is not 14");
    else
        printf("Not Prime & sum of digits is not 14");
}

int main()
{
    check_prime_and_sum14();
    return 0;
}
