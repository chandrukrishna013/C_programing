#include <stdio.h>

int main()
{
    int arr[50];
    char str[51];
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        str[i] = arr[i] + '0';
    }

    str[n] = '\0';

    printf("%s", str);

    return 0;
}
