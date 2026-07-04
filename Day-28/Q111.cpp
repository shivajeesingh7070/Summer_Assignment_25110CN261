// Write a program to Create ticket booking system.

#include<iostream>
using namespace std;
int main(){
    char name[100];
    int tickets=100;
    int required;
    int choice;

    cout<<"enter your name\n";
    cin.getline(name,100);

    do{
        cout<<"\n1. check available tickets\n";
        cout<<"2. book tickets\n";
        cout<<"3. cancel tickets\n";
        cout<<"4. exit\n";

        cout<<"enter your choice\n";
        cin>>choice;

        if(choice==1){
            cout<<"available tickets : "<<tickets<<endl;
        }
        else if(choice==2){
            cout<<"enter the number of tickets\n";
            cin>>required;
            if(required<=tickets){
                tickets=tickets-required;
                cout<<"tickets booked successfully\n";
            }
            else{
                cout<<"tickets are not available\n";
            }
        }
        else if(choice==3){
            cout<<"enter the number of tickets to cancel\n";
            cin>>required;
            tickets=tickets+required;
            cout<<"tickets cancelled successfully\n";
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