#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int binary2decimal(long n)
{
    int remainder, decimal, i;
    while (n != 0)
    {
        remainder = n % 10;
        n /= 10;
        decimal += remainder * pow(2 , i++);
    }
    return decimal;
}

int main(void)
{
    long n;
    printf("輸入一個二進制位數: ");
    scanf("%ld",&n);
    printf("二進制位數: %ld => 十進制位數: %d\n",n,binary2decimal(n));
}