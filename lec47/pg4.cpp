//refrence variable
#include <iostream>
using namespace std;

int main()
{
    int num=10;
    int &temp=num; //num and temp are same
    cout<<temp<<endl;
    temp++;
    cout<<num<<endl;
    cout<<&num<<" "<<&temp;
    return 0;
}