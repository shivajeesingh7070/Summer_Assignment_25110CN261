// Write a program to Create employee management system.

#include<iostream>
using namespace std;
int main(){
    int id,salary;
    char name[100];
    int choice;

    cout<<"enter the employee name\n";
    cin.getline(name,100);

    cout<<"enter the employee id\n";
    cin>>id;

    cout<<"enter the salary\n";
    cin>>salary;

    do{
        cout<<"\n1. display employee details\n";
        cout<<"2. update salary\n";
        cout<<"3. exit\n";

        cout<<"enter your choice\n";
        cin>>choice;

        if(choice==1){
            cout<<"employee name : "<<name<<endl;
            cout<<"employee id : "<<id<<endl;
            cout<<"salary : "<<salary<<endl;
        }
        else if(choice==2){
            cout<<"enter the updated salary\n";
            cin>>salary;
            cout<<"salary updated successfully\n";
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