#include<stdio.h>

int main(void)
{
    int a = 7;
    int *aPtr = &a; //set aPtr => address of a

    printf("The address of a is %p"
            "\nThe value of apPtr is %p", &a, aPtr);

    printf("\n\nThe value of a is %d"
            "\nThe value of *apPtr is %d", a, *aPtr);

    printf("\n\nShowing that * and & are complements of "
            "each other \n&*aPtr = %p"
            "\n*&aPtr = %p\n", &*aPtr, *&aPtr);
}
