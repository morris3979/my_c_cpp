#include <stdio.h>

int main(void){
int i, j, s;

i = 1;

printf("請輸入值：");
scanf("%d", &j);

for(s = 0; i <= j; i++)
if(i % 2 != 0)

s+=i;

printf("sum of odd numbers is %d\n",s);

return 0;
}