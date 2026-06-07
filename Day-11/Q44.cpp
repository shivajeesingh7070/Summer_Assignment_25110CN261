// Write a program to Write function to find factorial. 

#include <iostream>
using namespace std;

int factorial(int);

int main(){
    int num1;
    cout<<"enter the number\n";
    cin>>num1;
    cout<<"the factorial of "<<num1<<" is "<<factorial(num1);
    return 0;
}

int factorial(int number){
    int product=1;
    for(int i =1 ; i<= number ; i++){
        product*=i;
    }
    return product;
}