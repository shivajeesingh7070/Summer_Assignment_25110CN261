// Write a program to Check Armstrong number. 
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,temp,counter=0,backup,sum=0;
    cout<<"enter the number : ";
    cin>>n;
    backup=n;
    while(n>0){
        n=n/10;
        counter++;
    }
    n=backup;
    while(n>0){
        temp=n%10;
        sum=sum+ (int)round(pow(temp,counter));       //round rounds off the number, int typecasts 
        n=n/10;
    }
    if(sum==backup){
        cout<<"the number is an armstrong number";
    }
        else
        cout<<"the number is not an armstrong number";
        
        return 0;
}
