// Write a program to Write function to check prime. 

#include <iostream>
using namespace std;
void prime(int);
int main(){
    int number;
    cout<<"enter the number to be checked\n";
    cin>>number;
    prime(number);
    return 0;
}

void prime(int a){
    int prime=1;
    if(a==1){
        cout<<"the number is not prime";
    }
    else{
    for(int i = 2 ; i<=a/2 ;i++){
        if(a%i==0){
            prime = 0;
            break;
        }
    }
    if(prime==1){
        cout<<"the number is prime";
    }
    else
    cout<<"the number is not prime";
}
}