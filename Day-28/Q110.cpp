// Write a program to Create bank account system.

#include<iostream>
using namespace std;
int main(){
    char name[100];
    int account_number;
    int balance;
    int amount;
    int choice;

    cout<<"enter the account holder name\n";
    cin.getline(name,100);

    cout<<"enter the account number\n";
    cin>>account_number;

    cout<<"enter the initial balance\n";
    cin>>balance;

    do{
        cout<<"\n1. display account details\n";
        cout<<"2. deposit money\n";
        cout<<"3. withdraw money\n";
        cout<<"4. exit\n";

        cout<<"enter your choice\n";
        cin>>choice;

        if(choice==1){
            cout<<"account holder : "<<name<<endl;
            cout<<"account number : "<<account_number<<endl;
            cout<<"balance : "<<balance<<endl;
        }
        else if(choice==2){
            cout<<"enter the amount\n";
            cin>>amount;
            balance=balance+amount;
            cout<<"amount deposited successfully\n";
        }
        else if(choice==3){
            cout<<"enter the amount\n";
            cin>>amount;
            if(amount<=balance){
                balance=balance-amount;
                cout<<"amount withdrawn successfully\n";
            }
            else{
                cout<<"insufficient balance\n";
            }
        }
        else if(choice==4){
            cout<<"thank you";
        }
        else{
            cout<<"invalid choice";
        }

    }while(choice!=4);

    return 0;
}