#include<stdio.h>
#include<ctype.h>

int main(void)
{
    char a[20];

    printf("請輸入一行字串: ");
    scanf("%s",a);

    printf("\"%s\"大小寫轉換後變成\"%s\"\n",a,a);