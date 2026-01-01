#include <stdio.h>

int main()
{
    int num;
    int firstTwoDigits, lastTwoDigits;

    scanf("%d", &num);

    firstTwoDigits = num / 100;
    lastTwoDigits = num % 100;

    if (firstTwoDigits == lastTwoDigits)
        printf("Success");
    else
        printf("Failure");

    return 0;
}
