// Write a program to Frequency of an element. 

#include <iostream>
using namespace std;
int main(){
    int n,counter=0,number;
    cout<<"enter the size of the array\n";
    cin>>n;
    int array[n];
    cout<<"enter the elements of the array\n";
    for(int i = 0; i<n ; i++){
        cin>>array[i];
    }
    cout<<"enter the number to be checked for its frequency in the array\n";
    cin>>number;
    for(int i = 0 ; i<n ; i++){
        if(array[i]==number){
            counter++;
        }
    }
    if(counter==0){
        cout<<"the element wasn't found";
    }
    else
    cout<<"the frequency of the element "<<number<<" is "<<counter;
    
    return 0;
}