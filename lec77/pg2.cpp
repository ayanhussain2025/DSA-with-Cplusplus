//how to open and read the file
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
    fin>>c; //file me fist character lega //fin>>c; ye space aur tab ko read nahi akrpaeyga bcz ye usko as a character treat hi nahi karta
    while(!fin.eof())
    {
        cout<<c; //current charcter value ko print karwa do
        fin>>c; //agle charcter pe chale jao
    }
    //last me file close kardo

    fin.close();
    
    return 0;
}