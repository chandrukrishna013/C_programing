#include <stdio.h>

int hcf(int a, int b)
{
    while (b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main()
{
    int a, b, c, lcm;

    scanf("%d %d %d", &a, &b, &c);

    lcm = (a * b) / hcf(a, b);
    lcm = (lcm * c) / hcf(lcm, c);

    printf("%d", lcm);
    return 0;
}
