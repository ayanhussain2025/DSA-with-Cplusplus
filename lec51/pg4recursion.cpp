// Recursion = a function which call itself again and again until the given condition is satisfied
#include <iostream>
using namespace std;
void fun(int n)
{
    //Base Case(stop condition) = rukna kaha h
    if(n==0)
    {
        cout<<"Happy birthday to you";
        return;
    }
    cout<<n<<" remaining days in birthday"<<endl;
    fun(n-1);
}

int main()
{
    fun(5);
    return 0;
}