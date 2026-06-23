// Write a program to Transpose matrix. 

#include <iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"enter the rows and the columns of the matrix respectively\n";
    cin>>row>>column;
    int matrix[100][100];
    int transpose[100][100];
    cout<<"enter the elements of the matrix\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
        cin>>matrix[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            transpose[j][i]=matrix[i][j];     
        }
    }
    cout<<"the transpose of the matrix is :\n";
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            cout<<transpose[i][j];
            cout<<"  ";
        }
        cout<<endl;
    }

    return 0;
}