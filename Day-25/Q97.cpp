// Write a program to Merge two sorted arrays.

#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the size of the first array\n";
    cin>>m;
    int array1[m];
    cout<<"enter the elements of the first sorted array\n";
    for(int i=0;i<m;i++){
        cin>>array1[i];
    }

    cout<<"enter the size of the second array\n";
    cin>>n;
    int array2[n];
    cout<<"enter the elements of the second sorted array\n";
    for(int i=0;i<n;i++){
        cin>>array2[i];
    }

    int merge[m+n];
    int i=0,j=0,z=0;

    while(i<m&&j<n){
        if(array1[i]<array2[j]){
            merge[z]=array1[i];
            i++;
        }
        else{
            merge[z]=array2[j];
            j++;
        }
        z++;
    }

    while(i<m){
        merge[z]=array1[i];
        i++;
        z++;
    }

    while(j<n){
        merge[z]=array2[j];
        j++;
        z++;
    }

    cout<<"the merged array is\n";
    for(int i=0;i<m+n;i++){
        cout<<merge[i]<<" ";
    }

    return 0;
}