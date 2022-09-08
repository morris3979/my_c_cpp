#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    int a = 0;
    int b = 0;
    int low = 1,high = 100;
    int count = 0;

    srand((unsigned)time(NULL));
    b = rand()%(high - low + 1) + low;

    do
    {
        printf("猜第 %d 次，請輸入 %d～%d 的數 ==> ", ++count, low, high); 
        scanf("%d", &a);
        if (a == b)
        {
            printf("答對囉!!\n");
            break;
        }
        else 
        {
            printf("不對喔!!\n");
            if (a > b)
            high = a - 1;
            else
            low = a + 1;
        }

    }while(a != b);
    return 0;
}