#include <stdio.h>

void check_prime()
{
    int num, i, flag = 1;

    scanf("%d", &num);

    if (num <= 1)
        flag = 0;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Prime");
    else
        printf("Not Prime");
}

int main()
{
    check_prime();
    return 0;
}
