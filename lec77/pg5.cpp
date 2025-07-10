//how to read line by line , rather than reading it character by character
#include<iostream>
#include<vector>
#include<fstream>


using namespace std;

int main()
{
    ofstream fout;
    fout.open("second.txt");
    fout<<"Hello Ayan\n";
    fout<<"Hi super Hero\n";
    fout<<"Ooh you're from india";

    fout.close();
    ifstream fin;
    fin.open("second.txt");
    string line;
    while(getline(fin,line)) //ye loop tab tak chalega jab tak dat khatam nahi hota file ka , getline line ko read karega by using fin and line me store kardega fir ham cout kan use karke line read karlenge
    cout<<line<<endl;

    fin.close();
}