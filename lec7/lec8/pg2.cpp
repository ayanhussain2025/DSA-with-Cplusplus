#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"Input the number : ";
    cin>>n;
    for(row=1;row<=n;row=row+1)
    {
        for(col=1;col<=n-row;col=col+1)
        {  
            //space print
            cout<<" "<<" ";
        }
        for(col=1;col<=row;col=col+1)
        {   
            //number print
            cout<<row<<" ";
        }
        //switch line
        cout<<endl;
    }
}
