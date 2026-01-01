#include <stdio.h>

int main() {
    int n, d0, d1;
    scanf("%d", &n);

    d0 = n % 10;     // unit digit
    d1 = n / 10;     // tens digit

    if (d1 >= d0)
        printf("Success");
    else
        printf("Failure");

    return 0;
}
