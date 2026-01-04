#include <stdio.h>

int main() {
    int num, last;

    scanf("%d", &num);
    last = num % 10;

    if (last % 2 != 0) {
        num = num - 1;
    }

    printf("%d", num);
    return 0;
}
