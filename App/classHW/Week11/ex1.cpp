#include<stdio.h>
#define SIZE 20

int main(void)
{
	int a[SIZE] = { 1,2,3,3,4,2,3,1,2,3,4,4,2,1,1,3,3,1,2,3 };
	int b[SIZE] = { 0 };
	int cor = 0;
	int fal = 0;
	for (int i = 0; i < SIZE; i++) {
		printf("Enter answer(1~4) %d: ", i + 1);
		scanf("%d", &b[i]);
	}
	for (int n = 0; n < SIZE; ++n)
	{
		if (b[n] == a[n])
		{
			cor += 1;
		}
		else
		{
			fal += 1;
		}
	}
	printf("Solution : ");
	for (int i = 0; i < 20; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("Answer :   ");
	for (int i = 0; i < 20; i++) {
		printf("%d ", b[i]);
	}
	printf("\n");
	printf("Correct : %d\n", cor);
	printf("False : %d\n", fal);
}