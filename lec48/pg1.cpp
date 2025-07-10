#include <iostream>
using namespace std;

int main()
{
    int n=10;
    int *p=&n; //single pointer
    int **p2=&p; //double pointer
    int ***p3=&p2; //triple pointer
    cout<<&n<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<p2<<endl;
    cout<<&p2<<endl;
    cout<<p3<<endl;
    return 0;
}