#include <stdio.h>

int main() {
    long long n, reverse = 0;

    scanf("%lld", &n);

    while (n != 0) {
        reverse = reverse * 10 + (n % 10);
        n /= 10;
    }

    printf("%lld\n", reverse);
    return 0;
}
