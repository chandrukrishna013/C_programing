#include <stdio.h>

int main()
{
    int num, i, flag = 1;

    scanf("%d", &num);

    if (num <= 1)
        flag = 0;

    for (i = 2; i * i <= num && flag; i++)
    {
        if (num % i == 0)
            flag = 0;
    }

    if (flag)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
