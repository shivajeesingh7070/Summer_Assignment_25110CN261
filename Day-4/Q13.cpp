// Write a program to Generate Fibonacci series. 
#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,n,c;    
    cout<<"enter the number of terms : ";        
    cin>>n;
    for(int i = 1 ; i<=n ; i++){
        cout<<a<<"\n";
        c=a+b;
        a=b;
        b=c;

    }

    return 0;
}