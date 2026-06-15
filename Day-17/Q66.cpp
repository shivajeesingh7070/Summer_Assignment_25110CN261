// Write a program to Union of arrays. 

#include <iostream>
using namespace std;
int main(){
        int m,n,found;
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
    int z=0;
    int unionArray[m+n];
    for(int i=0;i<m;i++){   
        found=0;                       //1 2 3 5 6 1 3
        for(int j=0;j<i;j++){                      
            if(array1[i]==array1[j]){
                found=1;
                break;
            }
        }
        if(found==0){
            unionArray[z]=array1[i];
            z++;
        }
    }
    for(int i=0;i<n;i++){
        found=0;
        for(int j=0;j<z;j++){
            if(array2[i]==unionArray[j]){
                found=1;
                break;
            }
        }
        if(found==0){
                unionArray[z]=array2[i];
                z++;
            }
    }
    for(int i=0;i<z;i++){
        cout<<unionArray[i]<<" ";
    }
    return 0;
}