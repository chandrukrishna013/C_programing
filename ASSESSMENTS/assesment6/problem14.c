#include <stdio.h>

void disp_interchange_first_last_digit()
{
    int num, first, last, middle, temp, result;

    scanf("%d", &num);      // get number from user

    last = num % 10;        // last digit

    temp = num;
    while (temp >= 10)
    {
        temp = temp / 10;
    }
    first = temp;           // first digit

    middle = num / 10;      // remove last digit
    middle = middle % 100000;   // remove first digit (simple way)

    result = last;
    result = result * 100000 + middle * 10 + first;

    printf("%d", result);
}

int main()
{
    disp_interchange_first_last_digit();
    return 0;
}
