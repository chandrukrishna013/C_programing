#include <stdio.h>

void check_first_2digits_prime()
{
    int num, first2, i, prime = 1;

    scanf("%d", &num);

    first2 = num;
    while (first2 >= 100)
    {
        first2 = first2 / 10;
    }

    if (first2 <= 1)
        prime = 0;

    for (i = 2; i < first2; i++)
    {
        if (first2 % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if (prime)
        printf("Prime");
    else
        printf("Not Prime");
}

int main()
{
    check_first_2digits_prime();
    return 0;
}
