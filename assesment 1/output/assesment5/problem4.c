#include <stdio.h>

int main()
{
    long int num;
    int count = 0;

    scanf("%ld", &num);

    while (num != 0)
    {
        count++;
        num = num / 10;
    }

    printf("%d", count);

    return 0;
}
