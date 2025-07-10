//rotate matrix kth time 
#include<iostream>
using namespace std;
//function to rotate the matrix by 90 degree 
void rotate90(int arr[][4],int n)
{
    //tranpose of the matrix
    for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
    swap(arr[i][j],arr[j][i]);

    //reverse each row
    for(int i=0;i<n;i++){
        int start=0,end=n-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++,end--;
        }
    }
}

// Function to print the matrix
void printMatrix(int arr[][4], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int matrix[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int k;
    cout<<"Enter How many time you want to rotate the matrix :";
    cin>>k;
    k=k%4;
    while(k)
    {
        rotate90(matrix,4);
        k--;
    }
    //for printing the rotated matrix;
    cout << "Rotated Matrix:" << endl;
    printMatrix(matrix, 4);
}