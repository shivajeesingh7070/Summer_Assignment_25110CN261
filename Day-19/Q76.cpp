// Write a program to Find diagonal sum. 

#include <iostream>
using namespace std;
int main(){
    int row,column,sum=0;
    cout<<"enter the rows and the columns of the matrix respectively\n";
    cin>>row>>column;
    int matrix[100][100];
    cout<<"enter the elements of the matrix\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
        cin>>matrix[i][j];
        }
    }
    if(row>column){
    for(int i=0;i<column;i++){
            sum=sum+matrix[i][i];   
    }
}
else if(column==row){
    for(int i=0;i<row;i++){
    sum=sum+matrix[i][i];   
}}
else{
    for(int i=0;i<row;i++){
    sum=sum+matrix[i][i]; 
}
}
    cout<<"the diagonal sum of the matrix is : "<<sum;
    

return 0;
}
