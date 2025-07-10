// // my way
// #include <iostream>
// using namespace std;

// int main()
// {
//     // decimal to binary
//     int num,rem;
//     cout<<"enter the number : ";
//     cin>>num;
//     int ans = 0;
//     int mul = 1;
//     while(num>0)
//     {
//         rem=num%2;
//         num=num/2;
//         ans=rem*mul+ans;
//         mul=mul*10;
//     }
//     cout<<ans;
// }
// rohit negi
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number : ";
    cin>>num;
    int rem,ans=0,mul=1;
    while(num>0)
    {
        //remainder
        rem=num&1;//bitwise operaton
        //quotient
        num=num>>1;//right shift
        //ans
        ans+=rem*mul;
        //mul
        mul*=10;
    }
    cout<<ans;
}