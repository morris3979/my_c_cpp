#include<stdio.h>
#include<iostream>
#include<time.h>
using namespace std;

int linearSearch(int[], int, int);

int main() {

	const int size = 20;//陣列大小
	int search = 0;//想要找的值

	int arr[size];//初始化資料陣列

	for (int i = 0; i < size; i++)
	{
		arr[i] = 1 + rand() % 50;
	}

    printf("Plz enter the number u want(1~50): ");
    scanf("%d",&search);

	int element = linearSearch(arr, search, size);

	if (element != -1)
	{
        printf("Found value at index %d\n",element);
	}

	else
	{
        printf("Value not found\n");
        
	}
    
}

int linearSearch(int data[], int key,int size)
{
	int index;

	for (index = 0; index < size; index++)
	{
		if (data[index]==key)
		{
			return index;
		}
	}
	return -1;
}