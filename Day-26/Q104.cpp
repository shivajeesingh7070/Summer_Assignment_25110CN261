// Write a program to Create quiz application.

#include<iostream>
using namespace std;
int main(){
    int choice,score=0;

    cout<<"Q1. what is the capital of india?\n";
    cout<<"1. delhi\n";
    cout<<"2. mumbai\n";
    cout<<"3. kolkata\n";
    cout<<"4. chennai\n";
    cin>>choice;

    if(choice==1){
        score++;
    }

    cout<<"\nQ2. how many days are there in a week?\n";
    cout<<"1. 5\n";
    cout<<"2. 6\n";
    cout<<"3. 7\n";
    cout<<"4. 8\n";
    cin>>choice;

    if(choice==3){
        score++;
    }

    cout<<"\nQ3. c++ was developed by?\n";
    cout<<"1. dennis ritchie\n";
    cout<<"2. bjarne stroustrup\n";
    cout<<"3. james gosling\n";
    cout<<"4. guido van rossum\n";
    cin>>choice;

    if(choice==2){
        score++;
    }

    cout<<"\nyour final score is "<<score<<" out of 3";

    return 0;
}