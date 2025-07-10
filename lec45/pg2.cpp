//adress of ponter depend on ram and its always in power of 2 
#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int *ptr=&a;
    cout<<sizeof(ptr)<<endl;
    float m=3.05;
    float *ptr1=&m;
    cout<<sizeof(ptr1)<<endl;
    return 0;
}
// size should come 8 but i think i divided my ram and memory thats why it is showing 4
