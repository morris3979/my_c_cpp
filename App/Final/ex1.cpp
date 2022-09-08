#include<stdio.h>
#include<math.h>
#include<string.h>

int main(int argc, char* argv[])
{
    FILE* In1, * Out1;
    char N[100][10];
    int  S[100][6]; //紀錄成績*4+總分+順序
    int  i, j, k; //i=人數, j=學生依序, k=4個成績
    float D[4], M[4];
    int Y, n;
    char S1[100];

    In1 = fopen("Book1.txt", "rb");
    Out1 = fopen("grade.txt", "w");
    i = 0;
    while (!feof(In1))
    {
        fscanf(In1, "%s %d  %d  %d  %d\r\n",
                &N[i][0], &S[i][0], &S[i][1], &S[i][2], &S[i][3]);
        S[i][5] = i; //讀取同時做編號
        i++;
    }
    fclose(In1);

    for (j = 0; j < i; j++)
    {
        S[j][4] = S[j][0] + S[j][1] + S[j][2] + S[j][3]; //算總分
    }

    //統計平均、均方根值
    for (k = 0; k < 4; k++)
    {
        M[k] = D[k] = 0;
        for (j = 0; j < i; j++)
        {
            M[k] += (float)S[j][k];
            D[k] += (float)S[j][k] * (float)S[j][k];
        }
        M[k] /= (float)i; //平均
        D[k] /= (float)i; //平均
        D[k] -= M[k] * M[k]; //平方
        D[k] = (float)sqrt(D[k]); //sqrt->開根號, pow->次方
    }

    //排序
    Y = i; //人數
    for (i = 0; i < Y - 1; i++)
        for (j = i + 1; j < Y; j++)
        {
            if (S[i][4] < S[j][4])
            { //成績交換
                for (k = 0; k < 6; k++)
                {
                    n = S[i][k];
                    S[i][k] = S[j][k];
                    S[j][k] = n;
                }
                //姓名交換
                strcpy(S1, &N[i][0]); //strcpy()是字串拷貝命令
                stpcpy(&N[i][0], &N[j][0]);
                strcpy(&N[j][0], S1);
            }
        }
        
        //依名次列印
        printf("名次 姓名 分數1 分數2 分數3 分數4  總分  平均\r\n");
        fprintf(Out1, "名次 姓名 分數1 分數2 分數3 分數4  總分  平均\n");
        for (i = 0; i < Y; i++)
        {
            printf("%3d %s  %d    %d    %d    %d   %d  %6.2f\r\n",
                    i + 1, &N[i][0], S[i][0], S[i][1], S[i][2], S[i][3], S[i][4], (float)S[i][4] / 4.0);
            fprintf(Out1, "%3d %s  %d    %d    %d    %d   %d  %6.2f\n",
                    i + 1, &N[i][0], S[i][0], S[i][1], S[i][2], S[i][3], S[i][4], (float)S[i][4] / 4.0);
        }

        //列印平均、均方根值
        printf("\t\n平均  ");
        fprintf(Out1, "\t\n平均  ");
        for (k = 0; k < 4; k++)
        {
            printf(" %6.2f", M[k]);
            fprintf(Out1, " %6.2f", M[k]);
        }
        printf("\r\n均方差");
        fprintf(Out1, "\r\n均方差");
        for (k = 0; k < 4; k++)
        {
            printf(" %6.2f", D[k]);
            fprintf(Out1, " %6.2f", D[k]);
        }
        printf("\r\n\r\n");
        return 0;
    
}
