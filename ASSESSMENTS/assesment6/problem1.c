#include <stdio.h>

/* Function to print numbers from 1 to 5 */
void disp_assend()
{
    int i;

    for (i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }
}

int main()
{
    disp_assend();   // call the function
    return 0;
}
