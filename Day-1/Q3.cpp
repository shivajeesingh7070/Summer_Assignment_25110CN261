// Write a program to Find factorial of a number.

#include<iostream>
using namespace std;
int main(){
    int N,factorial=1;
    cout<<"enter the number whose factorial is to be calculated : ";
    cin>>N;
    for(int i=1;i<=N;i++){
        factorial*=i;
    }
    cout<<"the factorial is " <<factorial;
    return 0;
}