//1.) Compile Time polymorphism --> a. Function Overloading : same function name but different parameter 
//it will figureout things in compiletime , means which function to call in compile time.
#include<iostream>
using namespace std;

class Area
{
    public:
    //area of cicle
    int calculatearea(int r)
    {
        return 3.14*r*r;
    }

    //area of rectangle
    int calculatearea(int l,int b)
    {
        return l*b;
    }
};
int main()
{
    Area circle,rectangle;
    cout<<circle.calculatearea(4)<<endl;
    cout<<rectangle.calculatearea(5,3)<<endl;
}