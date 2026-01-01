#include <stdio.h>

int main() {
    int num, temp, first, last, middle, digits = 1;

    scanf("%d", &num);

    last = num % 10;
    temp = num;

    while (temp >= 10) {
        temp /= 10;
        digits *= 10;
    }

    first = temp;
    middle = (num % digits) / 10;

    int result = last * digits + middle * 10 + first;

    printf("%d", result);
    return 0;
}
