// Write a program to Add matrices. 

#include <iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"enter the rows and the columns of the matrix respectively\n";
    cin>>row>>column;
    int matrix1[100][100];
    int matrix2[100][100];
    int result[100][100];
    cout<<"enter the elements of the first matrix\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
        cin>>matrix1[i][j];
        }
    }
    cout<<"enter the elements of the second matrix\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
        cin>>matrix2[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
        result[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    cout<<"the summation of the two matrix is :\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
        cout<<result[i][j]<<"   ";
        }
        cout<<endl;
    }

    
    return 0;
}