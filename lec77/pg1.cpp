//how to open or create a file and how to write data in it
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    //file ko open karna 
    ofstream fout;
    fout.open("zoom.txt"); //yha pe hamlog ka file ka path dalenge with name , agr wo exist nahi karega to ye create kardega aur open kardega
    
    //file me write karna
    fout<<"Hello India";
    fout.close(); //resources ko release kardo




}