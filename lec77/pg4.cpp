//write data of a vecctor inside a file
#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

int main()
{
    vector<int>arr(5);
    cout<<"Enter the value : ";
    for(int i=0;i<5;i++)
    cin>>arr[i];

    //create a new and then opne  file or open a existing file
    ofstream fout;
    fout.open("first.txt");

    for(int i=0;i<5;i++)
    {
        fout<<arr[i]<<" ";
    }
    fout.close();
    
}