// Write a program to Count set bits in a number. 
#include<iostream>
using namespace std;
int main(){
    int n,counter=0;
    cout<<"enter the decimal number : ";
    cin>>n;
    while(n>0){
        if(n%2==1){
            counter++;
        }
        n=n/2;
        }
        cout<<"number of set bits = "<<counter;
    return 0;
}