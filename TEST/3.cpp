#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 7

int Roll = 0;
void mode(unsigned int freq[], const unsigned int answer[]);

int main(void)
{
    int mode, times;
    printf("Plz enter how many times do u want to roll: ");
    scanf("%d", &Roll);

    printf("Response    Frequency       Histogram\n");

    printf("\nThe mode is the most frequent value.\n");
    printf("For this run the mode is %d which occurred %d times.\n", mode, times);
}

void mode(unsigned int freq[], const unsigned int answer[])
{
    for (int i = 0; i < 7; ++i)
    {
        printf("%d", i);
    }
    
}