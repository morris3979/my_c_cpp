#include<stdio.h>

int main(){
   int n;
   long x, t, t1;

   printf("請輸入項數: ");
   scanf("%d",&n);
   printf("費氏數列: ");
   
   for(int i = 1; i < n + 1; i++ ) {
      if( i == 0 || i == 1 ){
         x = i;
         t = 0;
         t1 = 1;
      }
      else {
         x = t + t1;
         t = t1;
         t1 = x;
      }
      printf("%ld ",x);
   }
   printf("\n");
   return 0;
}