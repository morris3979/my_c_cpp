#include <iostream>
#include <fstream>

using namespace std;

//temperature structure
struct Temperature
{
    int Celsius;
    int Fahrenheit;
};

typedef struct Temperature Temp;

//convert function
void convert(Temp t[])
{
    ofstream out;
    out.open("Test.txt"); //output file
    
    int ones[10];
    int f;
    
    //convert celsius into fahrenheit
    for(int i = 0; i < 10; i++)
    t[i].Fahrenheit=((t[i].Celsius * 9) / 5) + 32;

    //find the no of 1's
    for(int i = 0; i < 10; i++)
    {
        f = t[i].Fahrenheit;
        ones[i] = 0;

        while(f > 0) //convert into binary form
        {
            if(f % 2 != 0)
            ones[i]++; //if 1's present increase the count
            f = f / 2;
        }
    }

    cout<<"\nNumber 攝氏    華氏    1's\n"; //print on screen
    out<<"\nNumber 攝氏    華氏    1's\n"; //print on file
    
    for(int i = 0; i < 10; i++)
    {
        cout<< i + 1<< "\t" << t[i].Celsius << "\t" << t[i].Fahrenheit<< "\t"<< ones[i]<< "\n";//print on screen
        out<< i + 1<< "\t" << t[i].Celsius << "\t" << t[i].Fahrenheit<< "\t"<< ones[i]<< "\n"; //print on file
    }


}
//main
int main()
{
    Temp t[10]; //struct in array

    cout << "Plz enter 10 temperature of celsius :" << endl;

    //get temperature
    for(int i = 0; i < 10; i++)
    cin>>t[i].Celsius;

    convert(t); //call convert function
    return 0;
}