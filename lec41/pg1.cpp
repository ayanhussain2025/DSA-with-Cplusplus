//longest unique substring //sliding protocol window
#include <iostream>
#include<vector>
using namespace std;

int main()
{

    string s = "abcdecbeadf"; //input string 
    vector<bool>count(256,0); // creating vector of 256 size because characeter ranges from 0 - 255
    int first = 0, second =0 , len = 0;
    while(second<s.size())
    {
        //when repetation happen
        while(count[s[second]])
        {
            count[s[first]]=0;
            first++;
        }
        //when second pointer element is not repeating
        count[s[second]]=1;
        len=max(len,second-first+1);
        second++;
    }
    cout<<"longest unique substring length is : "<<len;
    return 0;
}