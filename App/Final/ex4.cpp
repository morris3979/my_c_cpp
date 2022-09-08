#include <stdio.h>
#include <stdlib.h>

void print1DArray(size_t size, int* array);
void print2DArray(size_t row, size_t col, int* array);

int main()
{
	printf("%s", "Enter size of a one-dimensional array: ");    //陣列宣告&記憶體配置
	int arraySize;
	scanf("%d", &arraySize);
	int *array = (int*)malloc(arraySize * sizeof(int));

	printf("%s", "Enter number of rows and columns in a 2-D array: ");
	int row1, col1;
	scanf("%d %d", &row1, &col1);
	int *array2D1 = (int*)malloc(row1 * col1 * sizeof(int));

	printf("%s",
		   "Enter number of rows and columns in another 2-D array: ");
	int row2, col2;
	scanf("%d %d", &row2, &col2);
	int *array2D2 = (int*)malloc(row2 * col2 * sizeof(int));

	printf("\nsizeof(array) yields array size of %lu bytes\n", sizeof(array));

	for (size_t i = 0; i < arraySize; ++i)       //輸入陣列內容          
		*(array + i) = i * i;

	for (size_t i = 0; i < row1; ++i)
	{
		for (size_t j = 0; j < col1; ++j)
			*(array2D1 + col1 * i + j) = i + j;
	}

	for (size_t i = 0; i < row2; ++i)
	{
		for (size_t j = 0; j < col2; ++j)
			*(array2D2 + col2 * i + j) = i + j;
	}

	puts("\nOne-dimensional array: ");           //印出陣列內容
	print1DArray(arraySize, array);

	puts("\nFirst two-dimensional array: ");
	print2DArray(row1, col1, array2D1);

	puts("\nSecond two-dimensional array: ");
	print2DArray(row2, col2, array2D2);

	free(array);                                 //清空記憶體
	free(array2D1);
	free(array2D2);
	
	return 0;
}

void print1DArray(size_t size, int *array)
{
	for (size_t i = 0; i < size; ++i)
		printf("array[%lu] = %d\n", i, *(array + i));
}

void print2DArray(size_t row, size_t col, int *array)
{
	for (size_t i = 0; i < row; ++i)
	{
		for (size_t j = 0; j < col; ++j)
			printf("%5d", *(array + col * i + j));

		puts("");
	}
}