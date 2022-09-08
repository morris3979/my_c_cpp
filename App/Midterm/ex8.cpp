#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int b, n; // b底數; n指數
	int ans = 1;

	printf("請輸入底數與他的次方數:\n");
	scanf("%d%d", &b, &n);

	for (int i = 1; i <= n; i++) {
		ans *= b; //ans = ans * b
	}
	printf("\n%d的%d次方= %d\n", b, n, ans);
}