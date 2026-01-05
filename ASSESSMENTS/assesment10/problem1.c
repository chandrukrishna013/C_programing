#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Original value: %d\n", num);

    num = num + 1;   

    printf("Changed value: %d\n", num);

    return 0;
}
