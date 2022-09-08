#include <stdio.h>

int	main(void){
    unsigned int counter;
    int grade;
    int total;

    float average;

    total = 0;
    counter = 0;

    printf("Enter grade,-1 to end:");
    scanf("%d",&grade);

    while (grade != -1)
    {
        total = total+grade;
        counter = counter+1;

        printf("%s","Enter grade,-1 to end:"); //%s:字符串
        scanf("%d",&grade);
    }

    if(counter != 0){
        average = (float)total/counter;
        printf("Class average is %.3f\n",average); //取小數點到第x位
    }else
    {
        puts("No grades were entered");
    }
    
    
}
