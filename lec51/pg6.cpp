// n to 1 (all even no) and n is also even no
#include <iostream>
using namespace std;
void print(int n)
{
    if(n==2)
    {
        cout<<2;
        return;
    }
    cout<<n<<endl;
    print(n-2);
}

int main()
{
    int n=10;
    print(n);
    return 0;
}