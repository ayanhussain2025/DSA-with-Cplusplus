//creating a node statically
// #include<iostream>
// using namespace std;


// class Node{
//     public:
//     int data;
//     Node *next;
// };


// int main()
// {
//     Node A1;
//     A1.data=10;
//     A1.next=NULL;
// }

#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data=value;
        next=NULL;
    }
};


int main()
{
    Node A1(10);
}