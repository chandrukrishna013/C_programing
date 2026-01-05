#include <stdio.h>

int main() {
    int a[50], b[50], c[51];
    int n, i, carry = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    for(i = 0; i < n; i++) scanf("%d", &b[i]);

    for(i = n-1; i >= 0; i--) {
        c[i+1] = a[i] + b[i] + carry;
        carry = c[i+1] / 10;
        c[i+1] %= 10;
    }

    c[0] = carry;

    for(i = 0; i <= n; i++)
        printf("%d ", c[i]);

    return 0;
}
