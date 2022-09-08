#include <stdio.h>
#include <cstdlib>
#include <ctime>

void playCraps();
int  rollDice();

int main()
{
    int choice;
    do 
    {
        printf("1. 開始遊戲\n2. 結束遊戲\n請選擇選項：");
        scanf("%d",&choice);

        if ( choice == 1 )
        playCraps();
    }
    while (choice != 2);
    printf("遊戲結束！");
    return 0;
} 

void playCraps()
{
    enum Status {CONTINUE, WON, LOST};
    int sum; 
    int myPoint;
    int rollCount = 0;
    Status gameStatus;

    srand(time(0));
    sum = rollDice();
    rollCount++;
   
    switch(sum)
    {
        case 7:
        case 11:
        gameStatus = WON;
        break;

        case 2:
        case 3:
        case 12:
        gameStatus = LOST;
        break;

        default:
        gameStatus = CONTINUE;
        myPoint = sum;
        printf("Point is %d\n", myPoint);
        break;
    } 
    while (gameStatus == CONTINUE)
    {
        sum = rollDice();
        rollCount++;
        if ( sum == myPoint )
        gameStatus = WON;
        else if ( sum == 7 )
        gameStatus = LOST;
    } 
    if ( gameStatus == WON ) 
    {
        printf("------Player wins------\n");
    } 
    else 
    {
        printf("------Player loses------\n");
    } 
} 

int rollDice()
{
   int die1;
   int die2;
   int workSum;
   
   die1 = 1 + rand() % 6;
   die2 = 1 + rand() % 6;
   
   workSum = die1 + die2;
   printf("Player rolled %d + %d = %d\n", die1, die2, workSum);
   return workSum;
}