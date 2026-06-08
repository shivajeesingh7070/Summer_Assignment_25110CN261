// Write a program to Write function for Fibonacci. 

#include <iostream>
using namespace std;

int fibonacci(int);

int main(){
    int num;
    cout<<"enter the nth term : ";
    cin>>num;
    cout<<fibonacci(num);
    return 0;
}

int fibonacci(int num){
        int a=0,b=1,c;
    for(int i = 1 ; i<=num ; i++){
        c=a+b;
        a=b;
        b=c;
    }
    return a;
}