#include <stdio.h>

void incrementArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        arr[i] = arr[i] + 1;
    }
}

int main() {
    int arr[5], i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    incrementArray(arr, 5);

    printf("After increment:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
