// Write a program to Convert binary to decimal.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int bin,deci=0,temp,placeval=0;
    cout<<"enter the binary number : ";
    cin>>bin;
    while(bin>0){
        temp=bin%10;
        deci=deci+temp*(int)round(pow(2,placeval));
        placeval++;
        bin=bin/10;
    }
    cout<<deci;
    return 0;
}