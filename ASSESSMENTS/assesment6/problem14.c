#include <stdio.h>

void disp_interchange_first_last_digit()
{
    int num, first, last, middle, temp, result;

    scanf("%d", &num);     
    last = num % 10;        

    temp = num;
    while (temp >= 10)
    {
        temp = temp / 10;
    }
    first = temp;          

    middle = num / 10;      
    middle = middle % 100000;  

    result = last;
    result = result * 100000 + middle * 10 + first;

    printf("%d", result);
}

int main()
{
    disp_interchange_first_last_digit();
    return 0;
}
