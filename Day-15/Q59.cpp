// Write a program to Rotate array right. 

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
    int z = array[n-1];
    for(int i = n-1 ; i > 0 ; i--){
        array[i]=array[i-1];
    }
    array[0]=z;
    for(int i = 0 ; i < n ; i++ ){
        cout<<array[i]<<endl;
    }
    return 0;
}