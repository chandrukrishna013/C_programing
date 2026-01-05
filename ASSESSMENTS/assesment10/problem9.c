#include <stdio.h>

void intcon(int src1[], int size1, int src2[], int size2, int dst[])
{
    int i, j = 0;

    for(i = 0; i < size1; i++)
    {
        dst[j] = src1[i];
        j++;
    }

    for(i = 0; i < size2; i++)
    {
        dst[j] = src2[i];
        j++;
    }
}

int main()
{
    int a[3] = {1, 2, 3};
    int b[2] = {4, 5};
    int c[5];
    int i;

    intcon(a, 3, b, 2, c);

    printf("Concatenated Array:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
