// Write a program to Convert decimal to binary. 
#include<iostream>
using namespace std;
int main(){
    int n,rem,bin=0,place=1;
    cout<<"enter the decimal number : ";
    cin>>n;
    while(n>0){
        rem=n%2;
        n=n/2;
        bin=bin+ rem*place;        //place basically reverses the number..
        place=place*10;

    }
    cout<<bin;

    return 0;
}