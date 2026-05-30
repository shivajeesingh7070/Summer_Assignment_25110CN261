// Write a program to Find LCM of two numbers. lcm = (first * second) / gcd;
#include<iostream>
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
    cout<<"LCM of the two numbers is : "<<(first*second)/gcd;
}