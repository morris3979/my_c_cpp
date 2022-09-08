#include <stdio.h>

int main(void) {
	int n;
	printf("列印出n*n的西洋棋盤:n= ");
	scanf("%d", &n);
	printf("\n");
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if ((i + j) % 2 == 0) {
				printf(" ■");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}
}