// Write a program to Create voting eligibility system.

#include<iostream>
using namespace std;
int main(){
    int age;
    char citizen;

    cout<<"enter your age\n";
    cin>>age;

    cout<<"are you an indian citizen(y/n)\n";
    cin>>citizen;

    if(age>=18){
        if(citizen=='y'||citizen=='Y'){
            cout<<"you are eligible to vote";
        }
        else{
            cout<<"you are not eligible to vote";
        }
    }
    else{
        cout<<"you are not eligible to vote";
    }

    return 0;
}