// Write a program to Find largest prime factor. 
#include<iostream>
using namespace std;
int main(){
    int n,prime=1;
    cout<<"enter the number : ";
    cin>>n;
    for(int i =2 ; i<=n/2;i++){
        if(n%i==0){
            int isprime=1;
        for(int j = 2 ;j<=i/2;j++){
            if(i%j==0){
                isprime=0;
                break;
            }
        }
        if(isprime==1){
            prime=i;
        }
        }
    }
    cout<<prime;
    return 0;
}