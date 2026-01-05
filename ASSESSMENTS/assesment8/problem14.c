#include <stdio.h>

int main() {
    int a[20], x, n = 0;

    while(1) {
        scanf("%d", &x);
        if(x == 0)
            break;
        a[n++] = x;
    }

    if(n % 2 != 0)
        printf("%d", a[n/2]);
    else
        printf("%d", (a[n/2 - 1] + a[n/2]) / 2);

    return 0;
}
