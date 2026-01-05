#include <stdio.h>

int main() {
    char num[51];
    int i, valid = 1;

    printf("Enter a number string: ");
    scanf("%s", num);

    for (i = 0; num[i] != '\0'; i++) {
        if (num[i] < '0' || num[i] > '9') {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Valid number");
    else
        printf("Invalid number");

    return 0;
}
