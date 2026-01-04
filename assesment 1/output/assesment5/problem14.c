#include <stdio.h>

int main()
{
    long int num;
    int digit, count = 0;

    scanf("%ld", &num);

    while (num != 0)
    {
        digit = num % 10;
        if (digit % 2 != 0)
            count++;
        num /= 10;
    }

    printf("%d", count);
    return 0;
}
