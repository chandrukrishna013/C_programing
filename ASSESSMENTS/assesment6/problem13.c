#include <stdio.h>

void disp_reverse_number()
{
    int num, digit, rev = 0;

    scanf("%d", &num);      // get number from user

    while (num > 0)
    {
        digit = num % 10;           // take last digit
        rev = rev * 10 + digit;     // build reverse number
        num = num / 10;             // remove last digit
    }

    printf("%d", rev);      // print reversed number
}

int main()
{
    disp_reverse_number();
    return 0;
}
