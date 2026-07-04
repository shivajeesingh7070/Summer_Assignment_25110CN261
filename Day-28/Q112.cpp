// Write a program to Create contact management system.

#include<iostream>
using namespace std;
int main(){
    char name[100];
    char phone[20];
    int choice;

    cout<<"enter the contact name\n";
    cin.getline(name,100);

    cout<<"enter the phone number\n";
    cin.getline(phone,20);

    do{
        cout<<"\n1. display contact\n";
        cout<<"2. update phone number\n";
        cout<<"3. exit\n";

        cout<<"enter your choice\n";
        cin>>choice;

        cin.ignore();

        if(choice==1){
            cout<<"contact name : "<<name<<endl;
            cout<<"phone number : "<<phone<<endl;
        }
        else if(choice==2){
            cout<<"enter the new phone number\n";
            cin.getline(phone,20);
            cout<<"phone number updated successfully\n";
        }
        else if(choice==3){
            cout<<"thank you";
        }
        else{
            cout<<"invalid choice";
        }

    }while(choice!=3);

    return 0;
}