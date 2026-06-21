// Write a program to Sort array in descending order.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array\n";
    cin>>n;
    int array[n];
    cout<<"enter the elements of the array\n";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int temp;
    for(int j=0;j<n-1;j++){
    for(int i=0;i<n-1;i++){
        if(array[i+1]>array[i]){
            temp=array[i+1];
            array[i+1]=array[i];
            array[i]=temp;
        }
        else{
        continue;
        }
}}
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}