#include <stdio.h>
#include <time.h>
#include <stdlib.h> // RAND_MAX

int main()
{
	int i, sum, rnd;
	int RunTimes = 0;
	printf("%s", "Please enter how many times do you want to roll: ");
	scanf("%d", &RunTimes);
	int SumTimes[20] = { 0 }; // 紀錄點數出現的次數, 全歸零
	
	// 進行測試
	for (i = 0; i < RunTimes; ++i) {// 測試 RunTimes 次
		rnd = rand() % 6 + 1; // 第一顆骰子出現點數
		sum = rnd;             // 紀錄總合
		// 將出現 sum 點數之次數加1
		SumTimes[sum] = SumTimes[sum] + 1;
	}

	// 輸出結果
	sum = 0;
	for (i = 1; i <= 6; ++i) {
		printf("%d =>%2d 次\n", i, SumTimes[i]);
		sum = sum + SumTimes[i]; // 再驗證總合是不是500次
	}
	printf("共 %d 次 \n", sum);
	getchar();
	return 0;
}