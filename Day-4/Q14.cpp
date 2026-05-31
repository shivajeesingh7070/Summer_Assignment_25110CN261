// Write a program to Find nth Fibonacci term. 
#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,n,c;
    cout<<"enter the nth term : ";
    cin>>n;
    for(int i = 1 ; i<=n ; i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<a;
    return 0;
}