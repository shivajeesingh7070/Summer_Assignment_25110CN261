// Write a program to Recursive factorial.
#include<iostream>
using namespace std;
int factorial(int n)
{if(n<=1){
    return 1;
}
    return n*factorial(n-1);

}
int main(){
    int number;
    cout<<"enter the number : ";
    cin>>number;
    cout<<"the factorial of "<<number<<" is "<<factorial(number);


    return 0;
}