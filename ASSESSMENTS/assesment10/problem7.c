#include <stdio.h>

void memcomp(int a[], int b[], int size) {
    for(int i = 0; i < size; i++) {
        if(a[i] != b[i]) {
            printf("Failure");
            return;
        }
    }
    printf("Success");
}

int main() {
    int a[3] = {1, 2, 3};
    int b[3] = {1, 2, 3};

    memcomp(a, b, 3);
    return 0;
}
