// Write a program to Check perfect number. A perfect number is a positive integer that is equal to the sum of its proper divisors (all positive divisors excluding the number itself).
#include<iostream>
using namespace std;
int main (){
    int n,sum=0;
    cout<<"enter the number : ";
    cin>>n;
    for (int i = 1 ; i<=n/2 ; i++){
        if (n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        cout<<"the number is a perfect number";
    }
    else
    cout<<"the number is not a perfect number";

    return 0;
}