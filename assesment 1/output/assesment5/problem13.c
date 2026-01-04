#include <stdio.h>

int main()
{
    int i, j, count = 0, prime;

    for (i = 2; i <= 9; i++)
    {
        prime = 1;

        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime)
            count++;
    }

    printf("%d", count);

    return 0;
}
