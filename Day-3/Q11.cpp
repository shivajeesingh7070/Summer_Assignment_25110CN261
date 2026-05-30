// Write a program to Find GCD of two numbers. 
#include<iostream>
#include<algorithm>    //it works on vs code without this algorithm
using namespace std;
int main (){
    int first,second,gcd=1;
    cout<<"enter the first number : ";
    cin>>first;
    cout<<"enter the second number : ";
    cin>>second;
    for(int i = 1;i<=min(first,second);i++){
        if(first%i==0 && second%i==0){
            gcd=i;
        }
    }
    cout<<gcd;
    
}