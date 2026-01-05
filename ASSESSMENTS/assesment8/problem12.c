#include <stdio.h>

int main() {
    int a[100];
    int n, count = 0, sum = 0;

    while(1) {
        scanf("%d", &n);
        if(n == 0)
            break;
        a[count] = n;
        sum += n;
        count++;
    }

    printf("Total numbers: %d\n", count);
    printf("Sum: %d", sum);

    return 0;
}
