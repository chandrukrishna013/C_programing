#include <stdio.h>

void check_last_digit_odd()
{
    int num, first, temp, power = 1;

    scanf("%d", &num);

    temp = num;

    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;   

    if (first % 2 != 0)      
    {
        num = num - power;  
    }

    printf("%d", num);
}

int main()
{
    check_last_digit_odd();
    return 0;
}
