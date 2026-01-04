#include <stdio.h>

int main()
{
    long int num;
    int digit, count = 0;

    scanf("%ld", &num);

    while (num != 0)
    {
        digit = num % 10;

        if (digit == 0 || digit == 1 || digit == 4 || digit == 9)
            count++;

        num /= 10;
    }

    printf("%d", count);
    return 0;
}
