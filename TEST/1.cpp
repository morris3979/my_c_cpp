#include<stdio.h>

int main(int argc, char const *argv[])
{
    int value;

    printf("The original value of number is: ");
    scanf("%d", &value);

    int cube = value * value *value;
    printf("The new value of number is: %d\n",cube);

}
