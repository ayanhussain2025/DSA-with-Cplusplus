//find missing and repeating 
#include <iostream>
using namespace std;

int main()
{
    //range 1 to 7
    int arr[7]={4,3,2,1,2,7,6};
    int a1[7]={0};
    for(int i=0;i<7;i++)
    {
        if(arr[i]<8)
        {
            a1[arr[i]-1]++;
        }
    }
    //now finding the misssing and repeating array
    for(int i=0;i<7;i++)
    {
        //repeating no
        if(a1[i]>1)
        cout<<"repeat = "<<a1[i]<<endl;
        //missing no
        if(a1[i]==0)
        cout<<"missing no : "<<i+1;
    }

    return 0;
}