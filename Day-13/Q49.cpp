// Write a program to Input and display array. 

#include <iostream>
using namespace std;
int main(){
    int array[10];
    cout<<"enter the elements of the array\n";
    for(int i = 0 ; i<10 ; i++){
        cin>>array[i];
    }
    for(int i = 0 ; i<10 ; i++){
        cout<<array[i]<<" ";
    }
    
    
    return 0;
}