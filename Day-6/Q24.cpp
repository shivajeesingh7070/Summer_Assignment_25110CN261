// Write a program to Find x^n without pow()
#include<iostream>
using namespace std;
int main(){
    long double x,product=1;
    int n;
    cout<<"enter the number : ";
    cin>>x;
    cout<<"enter the power to be raised to : ";
    cin>>n;
    for(int i =1;i<=n;i++){
        product=product*x;
    }
    cout<<x<<"^"<<n<<"="<<product;


    return 0;
}