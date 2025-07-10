//this how pg3 done by refrence variable , why we do it ==> bcz pointer will get messy and we have to took care of lot of thing.
#include <iostream>
using namespace std;
void swapping(int &p1,int &p2){  //pass by refrence
    int temp=p1;
    p1=p2;
    p2=temp;
    
}

int main()
{
    int first=10,second=20;
    swapping(first,second);
    cout<<first<<" "<<second<<endl;
    return 0;
}

