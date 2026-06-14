// Write a program to Find missing number in array. 

#include <iostream>
using namespace std;
int main(){
    int n,missing_number=0;
    cout<<"enter the size of the array\n";
    cin>>n;
    int array[n];
    cout<<"enter the sequence of the numbers(make sure the numbers are in an ap where the first term is 1 and common difference is 1 and one number is missing)\n";
    for(int i = 0 ; i < n ; i++){
        cin>>array[i];
    }
    for(int i = 0 ; i < n ; i++){
    if(array[i]!=i+1){
            missing_number = i+1;
            break; 
        }
    }
    if(missing_number ==0){
        cout<<"there is no missing number in the array";
    }
    else{
     cout<<"the missing number is "<<missing_number;
    }
    return 0;
}