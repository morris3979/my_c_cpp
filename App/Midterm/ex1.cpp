#include <stdio.h>

int main(void) {
	int Score_1, Score_2, Score_3;
	float Average;
	char Grade;

	printf("Plz enter ur Score: \n");
	scanf("%d%d%d", &Score_1, &Score_2, &Score_3);
	Average = (float)((Score_1 + Score_2 + Score_3) / 3);

	if (Average >= 60)
		Grade = 'A';
	else
		Grade = 'B';
	printf("%8s%9s%9s%9s%7s\n", "Score_1", "Score_2", "Score_3", "Average", "Grade");
	printf("%8d%9d%9d%9.2f%7c\n", Score_1, Score_2, Score_3, Average, Grade);
}
