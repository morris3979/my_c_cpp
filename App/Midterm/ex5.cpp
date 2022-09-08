#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int n) {
	int r;
	if (m < n) {
		r = m;
		m = n;
		n = r;
	}
	while (n != 0) {
		r = m % n;
		m = n;
		n = r;
	}
	return m;
}

int lcm(int m, int n) {
	return m * n / gcd(m, n);
}

int main(void) {
	int m, n;

	printf("輸入兩數:");
	scanf("%d %d", &m, &n);

	printf("Gcd : %d\n", gcd(m, n)); //最大公因數
	printf("Lcm : %d\n", lcm(m, n)); //最小公倍數

	return 0;
}