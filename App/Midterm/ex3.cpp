#include<stdio.h>

int Mark[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
void GameScreen();

int main(void)
{
    int select = 0,number = 0;
    GameScreen();

    while (select != 3)
    {
        printf("(1)翻開 (2)覆蓋 (3)結束: ");
        scanf("%d",&select);

        switch (select)
        {
        case 1:
            printf("請輸入欲翻開的數字: ");
            scanf("%d",&number);
            Mark[number] = 0;
            printf("\n");
            GameScreen();
            break;
        case 2:
            printf("請輸入欲覆蓋的數字: ");
            scanf("%d",&number);
            Mark[number] = 1;
            printf("\n");
            GameScreen();
            break;
        case 3:
            printf("結束！\n");
            break;
        }
    }
}

void GameScreen(){
    for (int j = 0; j <= 9; j++)
    {
        if (Mark[j] == 0)
            printf("%d ",j);
        else
            printf("■ ");
    }
    printf("\n\n");
}