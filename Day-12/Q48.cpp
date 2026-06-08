// Write a program to Write function for perfect number. 

#include <iostream>
using namespace std;

void perfect_number(int);

int main(){
    int number;
    cout<<"enter the number\n";
    cin>>number;
    perfect_number(number);
    return 0;
}

void perfect_number(int a){
    int sum=0;
    for(int i = 1 ; i<=a/2 ; i++){
        if(a%i==0){
        sum=sum+i;
        }
    }
    if(sum==a){
        cout<<"the number is a perfect number";
    }
    else
    cout<<"the number is not a perfect number";
}