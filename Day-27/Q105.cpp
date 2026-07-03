// Write a program to Create student record management system.

#include<iostream>
using namespace std;
int main(){
    int roll,marks;
    char name[100];
    int choice;

    cout<<"enter the student name\n";
    cin.getline(name,100);

    cout<<"enter the roll number\n";
    cin>>roll;

    cout<<"enter the marks\n";
    cin>>marks;

    do{
        cout<<"\n1. display student record\n";
        cout<<"2. update marks\n";
        cout<<"3. exit\n";

        cout<<"enter your choice\n";
        cin>>choice;

        if(choice==1){
            cout<<"student name : "<<name<<endl;
            cout<<"roll number : "<<roll<<endl;
            cout<<"marks : "<<marks<<endl;
        }
        else if(choice==2){
            cout<<"enter the new marks\n";
            cin>>marks;
            cout<<"marks updated successfully\n";
        }
        else if(choice==3){
            cout<<"thank you";
        }
        else{
            cout<<"invalid choice\n";
        }

    }while(choice!=3);

    return 0;
}