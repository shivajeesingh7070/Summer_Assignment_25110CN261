// Write a program to Print prime numbers in a range. 
#include<iostream>
using namespace std;
int main (){
    int l,u;
    cout<<"ENTER THE RANGE\n";
    cout<<"enter the lower limit : ";
    cin>>l;
    cout<<"enter the upper limit : ";
    cin>>u;
    for(int i = l;i<=u;i++){
        int count=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                count++;
            }
            
            }
            if(count==0 && i>1){
                cout<<i<<"\n";
        }
        }
        return 0;
    }