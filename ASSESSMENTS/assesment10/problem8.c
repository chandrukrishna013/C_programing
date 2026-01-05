#include <stdio.h>

void strcmp_custom(char a[], char b[]) {
    int i = 0;

    while(a[i] != '\0' && b[i] != '\0') {
        if(a[i] != b[i]) {
            printf("Failure");
            return;
        }
        i++;
    }

    if(a[i] == '\0' && b[i] == '\0')
        printf("Success");
    else
        printf("Failure");
}

int main() {
    char a[50], b[50];

    scanf("%s %s", a, b);
    strcmp_custom(a, b);

    return 0;
}
