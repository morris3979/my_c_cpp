#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define SIZE 7
int main(void) {
	int temp;
	unsigned int largest = 0;
	unsigned int modeValue = 0;
	unsigned int frequency[SIZE] = { 0 };
	unsigned int die[SIZE] = { 0 };
	unsigned int Roll = 0;
	srand(time(NULL));
	printf("Please enter how many times do you want to roll : ");
	scanf("%d", &Roll);
	printf("********\n");
	printf("Mode\n");
	printf("********\n");
	for (unsigned int roll = 1; roll <= Roll; ++roll) {
		unsigned int face = 1 + rand() % 6;
		++frequency[face];
		++die[face];
	}
	printf("Face    frequency    Histogram\n");
	printf("                         0    1     1     2     2\n");
	printf("                         5    0     5     0     5\n");
	for (int Face = 1; Face <= 6; Face++) {
		printf("%4d%13d", Face, frequency[Face]);
		printf("    ");
		for (int time = 0; time < frequency[Face]; time++) {
			printf("*");
		}
		printf("\n");
	}
	for (size_t rating = 1; rating <= 7; ++rating) {
		if (frequency[rating] > largest) {
			largest = frequency[rating];
			modeValue = rating;
		}
	}
	for (int j = 0; j <= 6; j++) {
		for (int k = j; k <= 6; k++) {
			if (frequency[k] > frequency[k + 1]) {
				temp = frequency[k];
				frequency[k] = frequency[k + 1];
				frequency[k + 1] = temp;
			}
		}
	}
	printf("The mode is the most frequent value\n");
	printf("For this mode is %d which occurs %d times\n", modeValue, frequency[6]);

}