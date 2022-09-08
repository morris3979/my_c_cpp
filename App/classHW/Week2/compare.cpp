#include <stdio.h>

int main(void) {
    int num1;
    int num2;

    printf("Enter two integers, and I will tell you\n");
    printf("The relaionships they satisfy\n");

    scanf("%d%d", &num1, &num2);

    if(num1 == num2){
        printf("%d is equal %d\n", num1, num2);
    }
    if (num1 < num2) {
        printf("%d is less than %d\n", num1, num2);
    }
    if (num1 > num2) {
        printf("%d is greater than %d\n", num1, num2);
    }
    if (num1 <= num2) {
        printf("%d is less than or equal than %d\n", num1, num2);
    }
    if (num1 >= num2) {
        printf("%d is greater than or equal than %d\n", num1, num2);
    }

}