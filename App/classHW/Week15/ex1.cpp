#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int m;
  char str[100];

  printf("請輸入一行字串:");
  gets(str);
  printf("將\"%s\"", str);

  for(m = 0;str[m] != '\0'; m++) 
  {
    if(str[m] == toupper(str[m]))
    {
      str[m] = tolower(str[m]);
    }
    else if(str[m] == tolower(str[m]))
    {
      str[m] = toupper(str[m]); 
    }
  } 
  printf("大小寫轉換後變成\"%s\"\n",str);
  return EXIT_SUCCESS;

}