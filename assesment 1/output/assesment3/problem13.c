#include <stdio.h>

int main()
{
    int num;
    int lastDigit, secondLastDigit;

    scanf("%d", &num);

    lastDigit = num % 10;
    secondLastDigit = (num / 10) % 10;

    if (lastDigit == secondLastDigit)
        printf("Success");
    else
        printf("Failure");

    return 0;
}
