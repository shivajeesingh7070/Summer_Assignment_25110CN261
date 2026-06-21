// Write a program to Selection sort. 

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

    int temp,minidx,min;
    for(int i=0;i<n-1;i++){
        min = array[i];
        minidx = i;
        for(int j=i;j<=n-1;j++){
            if(min>array[j]){
                min=array[j];
                minidx=j;
            }
        }
        temp=array[minidx];
        array[minidx]=array[i];
        array[i]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}