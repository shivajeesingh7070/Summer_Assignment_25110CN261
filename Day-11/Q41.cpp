// Write a program to Write function to find sum of two numbers.
#include <iostream>
using namespace std;
int sum(int,int);              //function prototype
int main(){
    int num1,num2;
    cout<<"enter the 2 numbers to be added \n";
    cin>>num1>>num2;
    cout<<num1<<" + "<<num2<<" = "<<sum(num1,num2);
    return 0;
}

int sum(int a , int b){        //function definition
    return a+b;
}