#include <stdio.h>

int main()
{
    long int num, temp, first, last, pow = 1, result;

    scanf("%ld", &num);

    last = num % 10;
    temp = num;

    while (temp >= 10)
    {
        temp = temp / 10;
        pow = pow * 10;
    }

    first = temp;

    result = last * pow + (num % pow) / 10 * 10 + first;

    printf("%ld", result);

    return 0;
}
