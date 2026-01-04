#include <stdio.h>

int main()
{
    long int num, temp, pow = 1, msb;

    scanf("%ld", &num);

    temp = num;
    while (temp >= 10)
    {
        temp = temp / 10;
        pow = pow * 10;
    }

    msb = temp;

    if (msb % 2 != 0)
        num = num - pow;

    printf("%ld", num);

    return 0;
}
