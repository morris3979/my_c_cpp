#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int i, sum, rnd;
    int RunTimes = 0;
    printf("%s", "Please enter how many times do you want to roll: ");
    scanf("%d", &RunTimes);
    int SumTimes[20] = { 0 };
    
    for (i = 0; i < RunTimes; ++i) {
        rnd = rand() % 6 + 1;
        sum = rnd;
        SumTimes[sum] = SumTimes[sum] + 1;
    }

    sum = 0;
    for (i = 1; i <= 6; ++i) {
        printf("%d =>%2d 次\n", i, SumTimes[i]);
        sum = sum + SumTimes[i];
    }
    printf("共 %d 次 \n", sum);
    getchar();
    return 0;
}
