#include<stdio.h>
#include<ctype.h>

void convertToUppercase(char *sPtr);

int	main(void)
{
    char string[] = "cHaRaCters and $32.98";

    printf("The string before conversion is: %s", string);
    convertToUppercase(string);
    printf("\nThe string after conversion is: %s\n", string);
}

void convertToUppercase(char *sPtr)
{
    while (*sPtr != '\0') //'\0'與數字零相同；就像空格一樣是一個空字符
    {
        *sPtr = toupper(*sPtr); //轉換為大寫
        ++sPtr;
    }
    
}