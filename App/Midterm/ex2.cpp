#include<stdio.h>

int main(void)
{
    int n;
    printf("Plz enter an odd integer: ");
    scanf("%d",&n);

    if (n == 0 || n % 2 == 0)
    {
        printf("輸入錯誤,請輸入基數");
    }else
    {
        for (int i = 1; i <= n / 2 + 1; i++) //上三角(1)
        {
            for (int j = 1; j <= n / 2 + i; j++) //(2)
            {
                if (j >= n / 2 - i + 2) //(3)
                printf(" *");
                else
                printf("  ");
            }
            printf("\n");
        }
        for (int i = n / 2; i >= 1; i--) //下三角(4)
        {
            for (int j = 1; j <= n / 2 + i; j++)
            {
                if (j >= n / 2 - i + 2)
                printf(" *");
                else
                printf("  ");
            }
            printf("\n");
        }
    }
}
