#include <stdio.h>
#define SIZE 15

int main(void)
{
	int s[SIZE] = { 0 };
	int v[SIZE] = { 0 };
	int point;
	for (size_t j = 1; j < SIZE; ++j)
	{
		printf("Please enter response %lu (1~10):", j);
		scanf("%d", &point);
		if (point < 0 || point > 10)
		{
			j = j - 1;
		}
		if (point > 0 && point < 10)
		{
			s[j] = point;
		}
	}
	printf("%s%13s\n", "Rating", "Frequency");
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	int num6 = 0;
	int num7 = 0;
	int num8 = 0;
	int num9 = 0;
	int num10 = 0;
	for (size_t i = 1; i < SIZE; ++i)
	{

		if (s[i] == 1)
		{
			num1 = num1 + 1;
			v[1] = num1;
		}
		if (s[i] == 2)
		{
			num2 = num2 + 1;
			v[2] = num2;
		}
		if (s[i] == 3)
		{
			num3 = num3 + 1;
			v[3] = num3;
		}
		if (s[i] == 4)
		{
			num4 = num4 + 1;
			v[4] = num4;
		}
		if (s[i] == 5)
		{
			num5 = num5 + 1;
			v[5] = num5;
		}
		if (s[i] == 6)
		{
			num6 = num6 + 1;
			v[6] = num6;
		}
		if (s[i] == 7)
		{
			num7 = num7 + 1;
			v[7] = num7;
		}
		if (s[i] == 8)
		{
			num8 = num8 + 1;
			v[8] = num8;
		}
		if (s[i] == 9)
		{
			num9 = num9 + 1;
			v[9] = num9;
		}
		if (s[i] == 10)
		{
			num10 = num10 + 1;
			v[10] = num10;
		}
	}

	for (size_t q = 1; q < 10; ++q) {
		printf("%7lu%13d\n", q, v[q]);
	}

}