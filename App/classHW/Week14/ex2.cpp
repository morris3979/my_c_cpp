#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100 //Maximum size of the string

int main()
{
    char string[MAX_SIZE];
    int alphabets, i;

    alphabets = i = 0;

    printf("請輸入一行字串: ");
    scanf("%s", &string, sizeof(string));

    while (string[i] != '\0')
    {
        if ((string[i] == 'a') || (string[i] == 'A'))
        {
            alphabets++;
        }

        i++;
    }
    printf("\"%s\"\n", string);
    printf("上列字串共有%d個\"a\"字元\n", alphabets);

}

// autobiography