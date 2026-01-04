#include <stdio.h>

int main()
{
    long int num;
    int twoDigit, count = 0;

    scanf("%ld", &num);

    while (num >= 10)
    {
        twoDigit = num % 100;

        if (twoDigit >= 10 && twoDigit % 2 != 0)
            count++;

        num /= 10;
    }

    printf("%d", count);
    return 0;
}
