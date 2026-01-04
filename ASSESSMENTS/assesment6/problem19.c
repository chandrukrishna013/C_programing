#include <stdio.h>

void middle_2digits_prime()
{
    int num, middle, i, prime = 1;

    scanf("%d", &num);

    middle = (num / 10) % 100;   

    if (middle <= 1)
        prime = 0;

    for (i = 2; i < middle; i++)
    {
        if (middle % i == 0)
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
    middle_2digits_prime();
    return 0;
}
