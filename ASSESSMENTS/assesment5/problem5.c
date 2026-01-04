#include <stdio.h>

int main()
{
    long int num;
    int sum = 0;

    scanf("%ld", &num);

    while (num != 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }

    printf("%d", sum);

    return 0;
}
