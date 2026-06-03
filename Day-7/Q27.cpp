// Write a program to Recursive sum of digits. 
#include<iostream>
using namespace std;
    int sum_Digit(int n){
        if(n==0){
            return 0;
        }
        return n%10+ sum_Digit(n/10);
    }
int main (){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    cout<<"the sum of the digits of the number is "<<sum_Digit(n);
    return 0;
}