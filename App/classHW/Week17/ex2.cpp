#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    FILE *cfPtr;

    ofstream out;
    out.open("Result.txt"); //output file

    int ones[10];
    int f;

    
    char in_name[80];
    int ch, character = 0, line = 0, space = 0, tab = 0;


    if ((cfPtr = fopen("Test.txt", "r")) == NULL)
    {
        puts("File could not be opened");
    }else
    {
        while ((ch = fgetc(cfPtr)) != EOF)
        {
            character++;
            if (ch == ' ')
                space++;
            if (ch == '\n')
                line++;
            if (ch == '\t')
                tab++;
        }
        fclose(cfPtr);
        out << "\ncharacter       space          Newline\n"; //print on file
        out<<"\t  "<< character << "    \t\t" << space << "          \t\t" << line << "\n";

        printf("存取完成。\n");
    }
    return 0;
}