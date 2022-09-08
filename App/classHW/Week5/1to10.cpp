#include<stdio.h>

int	main(void)
{
    unsigned int counter = 1;

    do
    {
        printf("%u ",counter); //%u：無符號十進制整數
    } while (++counter <= 10);
    
}

