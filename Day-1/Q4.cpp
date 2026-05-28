// Write a program to Count digits in a number. 

#include<iostream>
using namespace std;
int main (){
    int number,counter=0;
    cout<<"enter the number";
    cin>>number;
    while(number>0){
        number=number/10;
        counter++;

    }
    cout<<counter;
    return 0;
}
