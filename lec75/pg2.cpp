//compile time --> Operator overloading
#include<iostream>
using namespace std;

class Complex
{
    int real,img;
    public:

    //making default constructor for ans
    Complex()
    {

    }
    Complex(int real,int img)
    {
        this->real=real;
        this->img=img;
    }

    Complex operator +(Complex &C)
    {
        Complex ans;
        ans.real=real+C.real; // ans.real = C1.real + C2.real; and here we can access private variable because C2 isi class ka object hai ,remeber private can be accessed in same class.
        ans.img=img+C.img;
        return ans;
    }

    void display()
    {
        cout<<real<<" +"<<img;
    }
};

int main()
{
    Complex C1(5,8);
    Complex C2(4,8);
    Complex C3=C1+C2;  //c1.function(c2);---> isko is trah smjh sakte ho
    C3.display();
    return 0;

}