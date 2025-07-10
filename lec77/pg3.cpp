//how to open and read the file and also read space
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //file ko open karo
    ifstream fin;
    fin.open("zoom.txt");
    //ab file kon read karna hai
    char c;//character by character read karega file
    c=fin.get();
    while(!fin.eof())
    {
        cout<<c; //current charcter value ko print karwa do
        c=fin.get();  //agle charcter pe chale jao
    }
    //last me file close kardo

    fin.close();
    
    return 0;
}