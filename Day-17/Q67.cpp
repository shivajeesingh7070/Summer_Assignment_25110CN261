// Write a program to Find common elements.

#include <iostream>
using namespace std;

int main(){
    int m,n,found;

    cout<<"enter the size of the first array ";
    cin>>m;

    int array1[m];
    cout<<"enter the elements of the first array ";
    for(int i=0;i<m;i++){
        cin>>array1[i];
    }

    cout<<"enter the size of the second array ";
    cin>>n;

    int array2[n];
    cout<<"enter the elements of the second array ";
    for(int i=0;i<n;i++){
        cin>>array2[i];
    }

    int common[m+n];
    int backup[m+n];
    int z=0;

    for(int i=0;i<m;i++){
        found=0;

        for(int j=0;j<n;j++){
            if(array1[i]==array2[j]){
                found=1;
                break;
            }
        }

        if(found==1){
            backup[z]=array1[i];
            z++;
        }
    }

    int y=0;

    for(int i=0;i<z;i++){
        found=0;

        for(int j=0;j<i;j++){
            if(backup[i]==backup[j]){
                found=1;
                break;
            }
        }

        if(found==0){
            common[y]=backup[i];
            y++;
        }
    }

    for(int i=0;i<y;i++){
        cout<<common[i]<<" ";
    }

    return 0;
}