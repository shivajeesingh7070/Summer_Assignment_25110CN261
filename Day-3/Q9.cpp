// Write a program to Check whether a number is prime. 
#include<iostream>
using namespace std;
int main (){
    int n,prime=1;
    cout<<"enter the number : ";
    cin>>n;
    if(n==1){
        cout<<"the number is not prime";
        return 0;                                       //leaving the code
    }
    for(int i = 2;i<=n/2; i++){
    if(n%i==0){
        prime=0;
        break;
    }
    }
    if(prime==1){
        cout<<"the number is prime";
    }
        else
        cout<<"the number is not prime";
        return 0;
}