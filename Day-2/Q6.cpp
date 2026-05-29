// Write a program to Reverse a number.
#include<iostream>
using namespace std;
int main(){
    int n,rev=0,temp;
    cout<<"enter the number : ";
    cin>>n;
    while(n>0){
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }                                                                  
    cout<<"the reversed number is "<<rev;
    return 0;
}