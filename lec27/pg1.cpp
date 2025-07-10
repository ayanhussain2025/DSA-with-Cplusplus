//Vector Programs
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //declaraion of a vector
    vector<int>v;
    //how to declare the size of a vector
    vector<int>v1(4);
    //how to initialize vector with some values;
    vector<int>v2(4,1);
    for(auto i : v2)
    cout<<v2[i]<<" ";
    cout<<endl;
    //how to insert value inside vector
    vector<int>V3;
    V3.push_back(2);
    V3.push_back(4);
    V3.push_back(5);
    V3.push_back(6);
    for(int i=0;i<4;i++)
    cout<<V3[i]<<" ";
    cout<<endl;
    //Another method to insert values insid vector
      //method 1:
    vector<int>v4={2,4,5,6};
    for(int i=0;i<4;i++)
    cout<<v4[i]<<" ";
    cout<<endl;
      //method 2;
      vector<int>v(5);
      for(int i=0;i<5;i++)
      cin>>v[i];
      for(int i=0;i<5;i++)
      cout<<v[i]<<" ";
      cout<<endl;
}