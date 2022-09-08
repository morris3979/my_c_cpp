#include <stdio.h>
#define SIZE 20

void staticArrayInit(void);
void automaticArrayInit(void);

int main(void) {
	puts("First call to each function:");
	staticArrayInit();
	automaticArrayInit();

	puts("\n\nSecond call to each function:");
	staticArrayInit();
	automaticArrayInit();
}

void staticArrayInit(void) {
	static int array1[3];
	puts("\nValues on entering staticArrayInit:");

	for (size_t i = 0; i <= 2; ++i) {
		printf("array1[%lu] = %d ", i, array1[i]);
	}

	puts("\nValues on exiting staticArrayInit:");

	for (size_t i = 0; i <= 2; ++i) {
		printf("array1[%lu] = %d ", i, array1[i] += 5);
	}
}

void automaticArrayInit(void) {
	int array2[3] = { 1,2,3 };
	puts("\nValues on entering automaticArrayInit:");

	for (size_t i = 0; i <= 2; ++i) {
		printf("array2[%lu] = %d ", i, array2[i]);
	}

	puts("\nValues on exiting staticArrayInit:");

	for (size_t i = 0; i <= 2; ++i) {
		printf("array2[%lu] = %d ", i, array2[i] += 5);
	}
}