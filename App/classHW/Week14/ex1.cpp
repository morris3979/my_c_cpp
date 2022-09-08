#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    int array[6] = {};
    int anwser[6] = {};
    const char *res[6] = {"吃自己","五獎","四獎","三獎","次獎","頭獎"};
    int x,y;
    int z = 0;

    for(int i = 0; i < 6; i++)
    {
        x = rand() % 42 + 1;
        array[i] += x;
        for(int j = 0; j < i; j++)
        {
            if (array[i]==array[j])
            {
                i--;
                break;
            }
        }
    }

    for(int i = 0;i < 6;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n\n");

    for(int i = 0;i < 6;i++)
    {
        printf("Plz enter number %d: ",i+1);
        scanf("%d",&y);
        printf("\n");
        anwser[i] += y;
    } 

    for(int i = 0;i < 6;i++)
    {
        for(int j = 0;j < 6;j++)
        {
            if (array[i] == anwser[j])
            {
                z += 1;
            }
        }
    }
    printf("\n");

    printf("中獎號碼: ");
    for(int i = 0;i < 6;i++)
    {
        printf("%2d ",array[i]);
    }
    printf("\n");
    printf("    選號: ");
    for(int i = 0;i < 6;i++)
    {
        printf("%2d ",anwser[i]);
    }
    printf("\n");
    printf("\n");

    if (z == 6)
    {
        printf("%s\n",res[5]);
    }
    else if(z == 5)
    {
        printf("%s\n",res[4]);
    }
    else if(z == 4)
    {
        printf("%s\n",res[3]);
    }
    else if(z == 3)
    {
        printf("%s\n",res[2]);
    }
    else if(z == 2)
    {
        printf("%s\n",res[1]);
    }else
    {
        printf("%s\n",res[0]);
    }
    
}