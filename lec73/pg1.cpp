#include<iostream>
using namespace std;

class Human
{
    private :
    int a;
    protected:
    int b;
    public :
    void fun() //same class ke ander sabhi accessable hai
    {
        a=10;
        b=20;
        c=30;
    }
    int c;
};
int main()
{
    Human ayan;
    // ayan.a; //private hai isliye hamisko main fn ke ander access nahi karsakte
    // ayan.b; //same protected hai
    ayan.c;
    ayan.fun();
    return 0;
}