//going to do this directly in leetcode  //error h future mein sahi karunga
#include <iostream>
using namespace std;
    string ones(int num){
        if(num==1)
        return "I";
        else if(num==2)
        return "II";
        else if(num==3)
        return "III";
        else if(num==4)
        return "IV";
        else if(num==5)
        return "V";
        else if(num==6)
        return "VI";
        else if(num==7)
        return "VII";
        else if(num==8)
        return "VIII";
        else return "IX";
    }

    string tens(int num){
        if(num==1)
        return "x";
        else if(num==2)
        return "XX";
        else if(num==30)
        return "XXX";
        else if(num==40)
        return "XL";
        else if(num==50)
        return "L";
        else if(num==60)
        return "LX";
        else if(num==70)
        return "LXX";
        else if(num==8)
        return "LXXX";
        else return "XC";
    }
int main()
{
    int n=25;
    cout<<"enter the number : ";
    string ans;
    int place = 1;
    while(n){
        int rem=n%10;
        if(place==1)
        ans+=ones(rem);
        else if(n==2)
        ans+=tens(n);
        // else if(n==3)
        // ans+=hundred(n);
        // else ans+=thousand(n);
        n=n/10;
        place++;
    }
    cout<<ans;
    return 0;
}