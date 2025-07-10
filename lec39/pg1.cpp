//sort the vowel in a string
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    string s="lEetcOde";
    int size=s.size();
    vector<int>upper(26,0),lower(26,0);
    //counting no of vowel in upper case 
    for(int i=0;i<size;i++){
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            upper[s[i]-'A']++;
            s[i]='#';
        }
    }
    //counting no of vowel in lower case
    for(int i=0;i<size;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            upper[s[i]-'a']++;
            s[i]='#';
        }
    }
    //creating an string that contain upper case vowel in order
    string ans;
    for(int i=0;i<26;i++){
        char c=i+'A';
        while(upper[i]){
            ans+=c;
            upper[i]--;
        }
    }
    //creating an string that contain lower case vowel in order
    for(int i=0;i<26;i++){
        char c=i+'a';
        while(lower[i]){
            ans+=c;
            lower[i]--;
        }
    }
    int first=0,second=0;
    while(second<ans.size()){
        if(s[first]=='#'){
            s[first]=ans[second];
            second++;
            first++;
        }
        else first++;
    }
    cout<<"ans is :"<<s;

}