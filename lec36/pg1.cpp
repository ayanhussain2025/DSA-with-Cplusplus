//string basic
#include <iostream>
using namespace std;

int main()
{   
    // character string 
       //method 1;
    char arr[]={'a','p','p','l','e'};
    cout<<arr<<endl;
       //method 2
    char arr2[]={'a','p','p','l','e'};
    for(int i=0;i<5;i++)
    cout<<arr2[i];
    cout<<endl;
       //method 3
    char arr3[10];
    cin>>arr3;
    cout<<arr3<<endl;
    arr3[2]='\0'; //i read at only read to pos 2 after that it not read bcz null is present
    cout<<arr3;
    // method 4 : last index is reserved for null value if you want to store any character at last index it will give an error
    char arr4[10];
    cin>>arr4;
    cout<<arr4; // my compiler is printing all 10 character but in rohit negi it is giving error
}