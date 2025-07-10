#include <iostream>
using namespace std;
void dob(int p[]) //*p == p[];
{
    for(int i=0;i<5;i++)
    p[i]=p[i]*p[i];
}

int main()
{
    int arr[5]={1,2,3,4,5};
    dob(arr);
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    return 0;
}