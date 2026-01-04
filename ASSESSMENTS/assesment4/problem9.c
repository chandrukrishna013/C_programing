#include <stdio.h>

int main() {
    int i, tens, ones;

    for (i = 10; i <= 99; i++) {
        if (i % 2 == 0) {
            tens = i / 10;
            ones = i % 10;

            if (tens + ones == 6) {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}