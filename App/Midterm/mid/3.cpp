#include <stdio.h>

int main(void){
    unsigned int chicken = 0;
    unsigned int hamburger = 0;
    unsigned int ff = 0;
    unsigned int hotdog = 0;

    puts("請點餐(1)炸雞$10 (2)漢堡$20 (3)薯條$30 (4)熱狗$90 (5)結束: ");

    int setmeal,sum1,sum2,sum3,sum4,sum;
    while ((setmeal = getchar()) != '5')
    {
        switch (setmeal)
        {
        case '1':
            printf("請輸入數量：");
            scanf("%d", &chicken);
            sum1 = 10 * chicken;
            puts("請點餐(1)炸雞$10 (2)漢堡$20 (3)薯條$30 (4)熱狗$90 (5)結束: ");
            break;
        case '2':
            printf("請輸入數量：");
            scanf("%d", &hamburger);
            sum2 = 20 * hamburger;
            puts("請點餐(1)炸雞$10 (2)漢堡$20 (3)薯條$30 (4)熱狗$90 (5)結束: ");
            break;
        case '3':
            printf("請輸入數量：");
            scanf("%d", &ff);
            sum3 = 30 * ff;
            puts("請點餐(1)炸雞$10 (2)漢堡$20 (3)薯條$30 (4)熱狗$90 (5)結束: ");
            break;
        case '4':
            printf("請輸入數量：");
            scanf("%d", &hotdog);
            sum4 = 90 * hotdog;
            puts("請點餐(1)炸雞$10 (2)漢堡$20 (3)薯條$30 (4)熱狗$90 (5)結束: ");
            break;
        case '\n':
        case '\t':
        case ' ':
            break;
        
        default:
            printf("%s","餐點輸入錯誤！");
            puts(" 請重新輸入餐點");
            break;
        }
        sum = sum1+ sum2+ sum3+ sum4;
    }
    printf("------------------------------------------------------------\n");
    printf("總金額為： %u元",sum);
    printf("\n\n");
    printf("炸雞: %u 個\n",chicken);
    printf("漢堡: %u 個\n",hamburger);
    printf("薯條: %u 個\n",ff);
    printf("熱狗: %u 個\n",hotdog);
    printf("------------------------------------------------------------\n");
}
