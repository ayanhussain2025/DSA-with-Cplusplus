#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    //taking size as an input 
    int row,col;
    cout<<"Enter the no of rows :";
    cin>>row;
    cout<<"Enter the no of col :";
    cin>>col;

    //creating a 2d vector
    vector<vector<int>>matrix(row,vector<int>(col,2));

    // taking value from user
    cout<<"Enter the value in matrix :"<<endl;
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    cin>>matrix[i][j];
    cout<<endl;


    //printing the vector
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++)
    cout<<matrix[i][j]<<" ";
    cout<<endl;
    }
    cout<<endl;

    //printing no of rows
    cout<<"rows = "<<matrix.size()<<endl;
    //printing no fo columns
    cout<<"cols = "<<matrix[0].size();
}