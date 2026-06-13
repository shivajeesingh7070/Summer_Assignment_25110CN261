// Write a program to Rotate array left. 

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array\n";
    cin>>n;
    int array[n];
    cout<<"enter the elements of the array\n";
    for(int i = 0 ; i < n ; i++ ){
        cin>>array[i];
    }
    int z=array[0];
    for(int i=0; i<n-1 ; i++){
        array[i]=array[i+1];
    }
    array[n-1]=z;
    for(int i = 0 ; i < n ; i++ ){
        cout<<array[i]<<endl;
    }
    
    return 0;
}