#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height = 8;
    int i, j, k;
    for (i = height / 2 - 1; i >= 1; i--)
    {
        for (k = 2; k <= height - 2 - i; k++)
            printf(" ");
        for (j = 0; j <= 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }
    for (i = 1; i <= height / 2; i++)
    {
        for (k = 1; k <= height - 2 - i; k++)
            printf(" ");
        for (j = 0; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
}
