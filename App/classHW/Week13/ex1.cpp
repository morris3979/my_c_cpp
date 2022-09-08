#include<stdio.h>
#define B 3
#define C 5
void bubbleSort(int * const array, const size_t size);

int	main(void)
{
    int A[B][C] = {{77,68,86,73,75},{96,87,88,89,78},{70,90,91,86,81}};
    int i, j; 
    float total = 0, totRow[3];
    totRow[0]=0;
    totRow[1]=0; 
    totRow[2]=0; 

    for (i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            totRow[i] += A[i][j];
            total += A[i][j];
        }
    }

    for(i = 0; i < 3; i++) {
        printf("Avg Row%d ", i);
        for(j = 0; j < 1; j++)
        printf(": %.1f\n", totRow[i] / 5);
    } 

    puts("");
    for (size_t i = 0; i < C; ++i)
    {
        printf("%3d", A[0][i]);
    }printf("\n");
    for (size_t i = 0; i < C; ++i)
    {
        printf("%3d", A[1][i]);
    }printf("\n");
    for (size_t i = 0; i < C; ++i)
    {
        printf("%3d", A[2][i]);
    }
    puts("\n");

    
    bubbleSort(A[0], C);
    for (size_t i = 0; i < C; ++i)
    {
        printf("%3d",A[0][i]);
    }
    puts("");
    bubbleSort(A[1], C);
    for (size_t i = 0; i < C; ++i)
    {
        printf("%3d",A[1][i]);
    }
    puts("");
    bubbleSort(A[2], C);
    for (size_t i = 0; i < C; ++i)
    {
        printf("%3d",A[2][i]);
    }
    puts("");
}

void bubbleSort(int * const array, const size_t size)
{
    void swap(int *element1Ptr, int *element2Ptr);

    for (unsigned int pass = 0; pass < size - 1; ++pass)
    {
        for (size_t j = 0; j < size -1; ++j)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

void swap(int *element1Ptr, int *element2Ptr)
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}