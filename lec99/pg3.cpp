#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>d;
    // d.pop_back(); //do not use pop back because it doesnot check for the empty condition while poping , it crash your program
    d.push_front(5);
    d.push_front(10);
    d.push_back(20);
    d.push_back(32);
    cout<<d.front()<<endl; // front == start in stl
    cout<<d.back()<<endl; //back == end in stl
    d.push_back(-19);
    d.push_front(-21);
}