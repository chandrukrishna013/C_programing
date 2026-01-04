#include <stdio.h>

int main()
{
    long int num, rev = 0;

    scanf("%ld", &num);

    while (num != 0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }

    printf("%ld", rev);

    return 0;
}
