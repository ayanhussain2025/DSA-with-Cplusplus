#include <iostream>
using namespace std;

int main()
{
    char arr[5]="1234";
    char *ptr=arr;
    cout<<arr<<endl; //fact is that arr will store address but arr also store a character value so rather than printing address it will print the value
    cout<<ptr<<endl; //same for this also

    // how to resolve this issue or how we can print address in this

    char *ptr1 = arr;
    cout<<(void*)arr<<endl;
    cout<<(void*)ptr1<<endl;

    //now lets see how this will go with chracter with the single value
    char name='a';
    cout<<&name<<endl;  //output : a1234 same as character array till knull value
    cout<<(void*)&name<<endl; //resolve method
    //lets see this with pointer variable
    char *ptr2 = &name;
    cout<<ptr2<<endl; // for more see line number 19
    cout<<(void*)ptr2<<endl;//resolve method

    //another way rather than using void* called static_cast
    cout<<static_cast<void*>(ptr2)<<endl;
    return 0;
}