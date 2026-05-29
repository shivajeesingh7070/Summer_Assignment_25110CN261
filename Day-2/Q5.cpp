// Write a program to Find sum of digits of a number. 
#include<iostream>
using namespace std;
int main (){
    int n,sum=0,temp;
    cout<<"enter the number : ";
    cin>>n;
    while(n>0){
        temp=n%10;
        n=n/10;
        sum=sum+temp;
    }
    cout<<"the sum of the digits of the number is "<<sum;
    return 0;
}