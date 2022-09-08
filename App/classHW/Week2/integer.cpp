#include <stdio.h>

int main(void)
{
    printf("學號：106310106\n姓名：張恩齊\n");
    int A,B,Sum = 0;

    printf("Enter first interger\n");
    scanf("%d",&A);

    printf("Enter second interger\n");
    scanf("%d",&B);

    Sum = A + B;
    printf("%d+%d=%d\n",A, B, Sum);

    if(Sum %2 == 0)
    printf("%d是2的倍數\n",Sum);

    if(Sum %3 == 0)
    printf("%d是3的倍數\n",Sum);

    if(Sum %5 == 0)
    printf("%d是5的倍數\n",Sum);

    if(Sum %2 != 0 && Sum %3 != 0 && Sum %5 != 0)
    printf("%d不是2,3,5的倍數\n",Sum);

}
