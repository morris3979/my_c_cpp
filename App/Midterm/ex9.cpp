#include<stdio.h>

int factorial(int n) //階乘
{
	if (n <= 1) {
		return 1;
	}
	else {
		return(n * factorial(n - 1));
	}
}

int main(void)
{
	int n, k;

	for (int i = 0; i < 1; i++) {
		printf("請輸入n,k: ");
		scanf("%d%d", &n, &k);
		if (n < k) {
			printf("n必須大於等於k,請重新輸入。\n");
			i--;
		}
	}
	printf("P(%d,%d)=%d\n", n, k, (factorial(n) / factorial(n - k)));
	printf("C(%d,%d)=%d\n", n, k, (factorial(n) / (factorial(k) * factorial(n - k))));
	return 0;
}