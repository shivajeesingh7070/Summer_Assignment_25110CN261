// Write a program to Find pair with given sum. 

#include <iostream>
using namespace std;
int main(){
    int n,target;
    cout<<"enter the size for the array\n";
    cin>>n;
    int array[n];
    cout<<"enter the target sum\n";
    cin>>target;
    cout<<"enter the elements of the array\n";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(i!=j){
            if(array[i]+array[j]==target){
                cout<<array[i]<<" & "<<array[j]<<endl;
            }}
        }
    }
    return 0;
}