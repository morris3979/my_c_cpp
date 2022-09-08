#include<stdio.h>

int	main(void)
{
    unsigned int counter = 1;

    while (counter <= 10)
    {
        printf("%u\n",counter); //%u：無符號十進制整數
        ++counter;
    }
    
}

