// Write a program to Write function to find maximum. 

#include <iostream>
using namespace std;
void maximum(int,int,int);      //function prototype
int main(){
    int num1,num2,num3;
    cout<<"enter the three numbers\n";
    cin>>num1>>num2>>num3;
    maximum(num1,num2,num3);
    return 0;
}

void maximum(int a , int b , int c){      //function definiton
    if(a>=b && a>=c){
        cout<<a<<" is the maximum";
    }
        else if(b>=c && b>=a){
            cout<<b<<" is the maximum";
        }
        else{
            cout<<c<<" is the maximum";
        }
    }
