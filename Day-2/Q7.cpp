// Write a program to Find product of digits.
#include<iostream>
using namespace std;
int main (){
    int n,temp,product=1;
    cout<<"enter the number : ";
    cin>>n;
    if(n==0)
    {
        cout<<"the product of the digits of the number is 0 ";
    }
    else{
    while(n>0){
        temp=n%10;
        product*=temp;
        n=n/10;
    }
    cout<<"the product of the digits of the number is "<<product;
}
    return 0;
}