#include <stdio.h>

void find_2digit_odd_sum7() {
    int num, d1, d2;

    for (num = 11; num <= 99; num++) {
        if (num % 2 != 0) {         
            d1 = num / 10;
            d2 = num % 10;

            if (d1 + d2 == 7) {
                printf("%d ", num);
            }
        }
    }
}

int main() {
    find_2digit_odd_sum7();
    return 0;
}
