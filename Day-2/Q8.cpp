// Write a program to Check whether a number is palindrome. 
#include<iostream>
using namespace std;
int main(){
    int n,rev=0,temp,backup;
    cout<<"enter the number : ";
    cin>>n;
    backup=n;
    while(n>0){
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    if(backup==rev){
        cout<<"the number is palindrome";
    }    
    else
    cout<<"the number is not palindrome";
    return 0;
}