#include <iostream>
using namespace std;

int main()
{
    //append operation
    string s1="rohit",s2="mohit";
    string s3=s1+s2;
    //or
    string s4=s1.append(s2);
    cout<<s3<<endl<<s4<<endl;
    //push and pop operations
    string s5="rohit";
    s5.push_back('p');
    s5.pop_back();
    s5=s5+'p'; //another way to push back or add some thing
    cout<<s5;
    return 0;
}