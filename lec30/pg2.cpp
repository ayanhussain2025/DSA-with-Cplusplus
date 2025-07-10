//optimize method
#include<iostream>
using namespace std;

int main()
{
    int height[8]={4,2,0,5,2,6,2,3};
    int n=8;
    int leftmax=0,rightmax=0,maxheight=height[0],water=0,index=0;
    
    //finding the maximum height building
    for(int i=0;i<n;i++)
    {
        if(maxheight<height[i])
        {
            maxheight=height[i];
            index=i;
        }
    }

    //finding maximum height wale left side walo building ki water collection.

    for(int i=0;i<index;i++)
    {
        if(leftmax>height[i])
        {
            water+=leftmax-height[i];
        }
        else leftmax=height[i];
    }
    //finding watercollection of right side including maximum height building.
    for(int i=n-1;i>index;i--)
    {
        if(rightmax>height[i])
        {
            water+=rightmax-height[i];
        }
        else rightmax=height[i];
    }
    cout<<water;
}