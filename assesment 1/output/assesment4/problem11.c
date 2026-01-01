#include <stdio.h>

int main() {
    long long n;
    int count = 0;

    scanf("%lld", &n);

    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            count++;
            n /= 10;
        }
    }

    printf("%d\n", count);
    return 0;
}
