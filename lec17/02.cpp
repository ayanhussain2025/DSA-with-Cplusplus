// #include <iostream>
// using namespace std;

// int main()
// {   
//     //reverse of an array 1st method
//     int arr[6]={6,11,7,4,8,9};
//     int temp[6];
//     int i=5,j=0;
//     while(i>=0)
//     {
//         temp[j]=arr[i];
//         j++;
//         i--;
//     }
//     i=0,j=0;
//     while(i<6)
//     {
//         arr[i]=temp[j];
//         i++;
//         j++;
//     }
//     for(int i=0;i<6;i++)
//     cout<<arr[i]<<" ";
// }

// another best method

#include <iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int start=0,end=5-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";

}

