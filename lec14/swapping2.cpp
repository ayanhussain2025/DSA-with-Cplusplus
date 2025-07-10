#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the two number : ";
    cin>>a>>b;
    swap(a,b); // why this happen , we dont made function for swapping
    cout<<a<<" "<<b<<endl; //ans- bcz swap is the inbuilt function of c++
    float c=3.5,d=4.5;
    swap(c,d);
    cout<<c<<" "<<d;
}