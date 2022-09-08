#include <stdio.h>

int main(void) {
	int temp = 0;
	int responses[10] = {};

	for (int number = 0; number < 10; number++) { //10個數字,0~9
		printf("Plz enter response %d : ", number + 1);
		scanf("%d", &responses[number]);
		printf("\n");
	}
	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			if (responses[j] < responses[i]) {
				temp = responses[j];
				responses[j] = responses[i];
				responses[i] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", responses[i]);
	}
	printf("\n");
	printf("最小%d\n", responses[0]);
	printf("最大%d\n", responses[9]);
}
