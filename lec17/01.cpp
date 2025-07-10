#include<iostream>
using namespace std;
int main()
{
    int arr[6]={10,20,7,11,8,4};
    int index=-1,x=9;
    for(int i=0;i<6;i++)
    {
       if(arr[i]==x)
       {
        index=i;
        break;
       }
    }
    cout<<index;
    
    
}
