#include<stdio.h>

void displayBits(unsigned int value);

int main(void)
{
    unsigned int number1 = 960;

    puts("\nThe result of left shifting");
    displayBits(number1);
    puts("8 bit positions using the left shift operator << is");
    displayBits(number1 << 8);

    puts("\nThe result of right shifting");
    displayBits(number1);
    puts("8 bit positions using the right shift operator << is");
    displayBits(number1 >> 8);
}

void displayBits(unsigned int value)
{
    unsigned int displayMask = 1 << 31;

    printf("%7u = ",value);

    for (unsigned int c = 1; c <= 32; ++c)
    {
        putchar(value & displayMask ? '1' : '0');
        value <<= 1;

        if (c % 8 == 0)
        {
            putchar(' ');
        }
    }
    putchar('\n');
}