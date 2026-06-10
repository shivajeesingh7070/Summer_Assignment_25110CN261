// Write a program to Linear search.

#include <iostream>
using namespace std;
int main(){
    int n,key;
    cout<<"enter the size of the array\n";
    cin>>n;
    int array[n];                                        //took the input n
    cout<<"enter the elements of the array\n";
    for(int i = 0 ; i < n ; i++){
        cin>>array[i];
    }
    cout<<"enter the element to search\n";
    cin>>key;
    int pos = -1;
    for(int i = 0 ; i < n ; i++){
        if(key==array[i]){
            pos=i;
            break;
        }
    }
    if(pos!=-1){
        cout<<"the element is found at index "<<pos;
    }
    else{
        cout<<"the element is not found";
    }

    
    return 0;
}