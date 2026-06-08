// Write a program to Write function for Armstrong..

#include <iostream>
#include<cmath>
using namespace std;
void armstrong(int);
int main(){
    int number;
    cout<<"enter the number\n";
    cin>>number;
    armstrong(number);
    return 0;
}

void armstrong(int a){
    int temp,backup,armstrong=0,num_digits=0;
    backup=a;
    while(a>0){
        a=a/10;
        num_digits++;   
    }
    a=backup;
    
    while(a>0){
        temp=a%10;
        armstrong=armstrong+(int)round(pow(temp,num_digits));
        a=a/10;
    }
    if(backup==armstrong){
        cout<<"the number is armstrong";
    }
    else
    cout<<"the number is not armstrong";
}