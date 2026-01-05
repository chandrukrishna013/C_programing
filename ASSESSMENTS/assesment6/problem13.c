#include <stdio.h>

void disp_reverse_number()
{
    int num, digit, rev = 0;

    scanf("%d", &num);     

    while (num > 0)
    {
        digit = num % 10;           
        rev = rev * 10 + digit;     
        num = num / 10;             
    }

    printf("%d", rev);      
}

int main()
{
    disp_reverse_number();
    return 0;
}
