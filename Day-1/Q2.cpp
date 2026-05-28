// Write a program to Print multiplication table of a given number. 

#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    for(int i=1;i<=10;i++){
        cout<<number<<" * "<<i<<"  = "<< number*i<<"\n";
    }
     return 0;
}
