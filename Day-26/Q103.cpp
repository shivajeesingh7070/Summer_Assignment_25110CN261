// Write a program to Create ATM simulation.

#include<iostream>
using namespace std;
int main(){
    int choice,pin=1234,balance=10000,amount,userpin;

    cout<<"enter your pin\n";
    cin>>userpin;

    if(userpin!=pin){
        cout<<"incorrect pin";
        return 0;
    }

    do{
        cout<<"\n1. check balance\n";
        cout<<"2. deposit money\n";
        cout<<"3. withdraw money\n";
        cout<<"4. exit\n";

        cout<<"enter your choice\n";
        cin>>choice;

        if(choice==1){
            cout<<"your current balance is "<<balance<<endl;
        }
        else if(choice==2){
            cout<<"enter the amount to deposit\n";
            cin>>amount;
            balance=balance+amount;
            cout<<"updated balance is "<<balance<<endl;
        }
        else if(choice==3){
            cout<<"enter the amount to withdraw\n";
            cin>>amount;
            if(amount<=balance){
                balance=balance-amount;
                cout<<"updated balance is "<<balance<<endl;
            }
            else{
                cout<<"insufficient balance\n";
            }
        }
        else if(choice==4){
            cout<<"thank you for using the atm";
        }
        else{
            cout<<"invalid choice\n";
        }

    }while(choice!=4);

    return 0;
}