#include <stdio.h>

int digitSum(int n) {
    int s = 0;
    while(n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    int a[20], b[20], x, n = 0, i, j, t;

    while(1) {
        scanf("%d", &x);
        if(x == 0)
            break;
        a[n] = digitSum(x);
        n++;
    }

    for(i = 0; i < n-1; i++)
        for(j = i+1; j < n; j++)
            if(a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
