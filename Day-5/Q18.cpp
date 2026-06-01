// Write a program to Check strong number.         A strong number is a number whose value is equal to the sum of the factorials of its digits.
#include<iostream>
using namespace std;
int main(){                                          //find the digit then ummm find its factorial store it in sum and then proceed..
    int n,backup,temp,sum=0,product;
    cout<<"enter the nummber : ";
    cin>>n;
    backup=n;
    while(n>0){
        product = 1;
        temp=n%10;
        n=n/10;
        for(int i = 1;i<=temp;i++){
            product=product*i;
        }
        sum=sum+product;
    }
    if(backup==sum){
        cout<<"the number is a strong number";
    }
    else
    cout<<"the number is not a strong number";


    return 0;
}