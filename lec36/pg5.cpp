#include <iostream>
using namespace std;

int main()
{
    //escape character 
    // use printing this kind of statement
    // rohit negi is a "good" boy 
    // string s="rohit negi is a "good" boy";//it doesn't read good boy and gives error
    //for correcting this use / character 
    string s1="rohit negi is a \"good\" boy";
    cout<<s1<<endl;
    //it can be used to printing null character '/0'
    string s2="\0"; //it not going to print // homework '/0'it mean blank chiz ko print kardo
    //printing null
    string s3="\\0";
    cout<<s3;
    return 0;
}