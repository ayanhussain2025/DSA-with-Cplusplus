//correct way to do previous program
#include <iostream>
using namespace std;
void swapping(int *p1,int *p2){  //pass by address
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    cout<<&p1<<" "<<&p2<<endl;
    cout<<p1<<" "<<p2<<endl;
}

int main()
{
    int first=10,second=20;
    cout<<&first<<" "<<&second<<endl;
    swapping(&first,&second); 
    cout<<first<<" "<<second<<endl;
    return 0;
}

