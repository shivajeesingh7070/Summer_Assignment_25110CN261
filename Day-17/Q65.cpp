// Write a program to Merge arrays. 

#include <iostream>
using namespace std;
int main(){
    int m,n,z;
    cout<<"enter the size of the first array ";
    cin>>m;
    int array1[m];
    cout<<"enter the elements of the first array ";
    for(int i =0 ; i<m;i++){
        cin>>array1[i];
    }
    cout<<"enter the size of the second array ";
    cin>>n;
    int array2[n];
    cout<<"enter the elements of the second array ";
    for(int i =0 ; i<n;i++){
        cin>>array2[i];
    }
    int merge[m+n];
    for(int i =0;i<m;i++){
        merge[i]=array1[i];
    }
    z=0;
    for(int i =m;i<m+n;i++){
        merge[i]=array2[z];
        z++;
    }
    for(int i =0;i<m+n;i++){
        cout<<merge[i]<<" ";
    }


    return 0;
}