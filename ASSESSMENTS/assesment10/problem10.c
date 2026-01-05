#include <stdio.h>

void strcon(char src1[], char src2[], char dst[])
{
    int i = 0, j = 0;

    while(src1[i] != '\0')
    {
        dst[j] = src1[i];
        i++;
        j++;
    }

    i = 0;

    while(src2[i] != '\0')
    {
        dst[j] = src2[i];
        i++;
        j++;
    }

    dst[j] = '\0';
}

int main()
{
    char s1[50] = "Hello ";
    char s2[50] = "World";
    char result[100];

    strcon(s1, s2, result);

    printf("Concatenated String: %s", result);

    return 0;
}
