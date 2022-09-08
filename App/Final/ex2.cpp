#include<stdio.h>

void calendar(FILE* readPtr, int Day, int FirstDate);

int main(void)
{
    FILE* Input;
    Input = fopen("Test.txt", "w");
    fprintf(Input, "%4s%4s%4s%4s%4s%4s%4s\n", "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat");
    int Day = 0;
    int FirstDate = 0;
    printf("請輸入天數: ");
    scanf("%d", &Day);
    printf("\n請輸入該月第一天的星期: ");
    scanf("%d", &FirstDate);
    calendar(Input, Day, FirstDate);
    fclose(Input);
}

void calendar(FILE* readPtr, int Day, int FirstDate)
{
    for (size_t count = 0; count <= FirstDate - 1; count++)
    {
        if (FirstDate <= 6)
        {
            fprintf(readPtr, "%4s", "");
        }
    }
    for (size_t count = 1; count <= Day; count++)
    {
        fprintf(readPtr, "%4lu", count);
        if ((FirstDate + count) % 7 == 0)
        {
            fprintf(readPtr, "\n");
        }
    }
}