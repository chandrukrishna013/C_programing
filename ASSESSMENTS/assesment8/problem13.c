#include <stdio.h>

int main() {
    int a[10], x, i = 0;

    while(1) {
        scanf("%d", &x);
        if(x == 0)
            break;
        a[i++] = x;
    }

    if(i == 4 && a[0] == a[i-1])
        printf("Success");
    else
        printf("Failure");

    return 0;
}
