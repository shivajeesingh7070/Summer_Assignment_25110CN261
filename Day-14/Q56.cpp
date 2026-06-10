// Write a program to Find duplicates in array.

#include <iostream>
using namespace std;
int main(){
    int n,counter,key,already_found,found=0;
    cout<<"enter the size for the array\n";
    cin>>n;
    int array[n];
    cout<<"enter the elements of the array\n";
    for(int i = 0 ; i < n ; i++){
        cin>>array[i];
    }
    for(int i = 0 ; i < n ; i++){
        counter=0;
        key=array[i];
        for(int j = 0 ; j < n ; j++){
            if(key==array[j]){
                counter++;
            }
        }
        if(counter>1){
            already_found = 0;
        for(int k = 0 ; k < i ; k++){
            if(array[k]==key){
                already_found=1;
                break;
            }
        }
        if (already_found==0){
            if(found==0){
                cout<<"Duplicates are:\n";
                found=1;
            }
            cout<<key<<endl;
           }
    }}

    if(found==0){
        cout<<"No duplicates found";
    }

    return 0;
}