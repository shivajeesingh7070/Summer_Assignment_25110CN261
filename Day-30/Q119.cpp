// Write a program to Create mini employee management system.

#include<iostream>
using namespace std;
int main(){
    int n,choice;
    cout<<"enter the number of employees\n";
    cin>>n;
    cin.ignore();

    char name[100][100];
    int id[100];
    int salary[100];

    for(int i=0;i<n;i++){
        cout<<"enter the employee name\n";
        cin.getline(name[i],100);
        cout<<"enter the employee id\n";
        cin>>id[i];
        cout<<"enter the salary\n";
        cin>>salary[i];
        cin.ignore();
    }

    do{
        cout<<"\n1. display employee details\n";
        cout<<"2. update salary\n";
        cout<<"3. exit\n";
        cout<<"enter your choice\n";
        cin>>choice;

        if(choice==1){
            for(int i=0;i<n;i++){
                cout<<"employee "<<i+1<<endl;
                cout<<"name : "<<name[i]<<endl;
                cout<<"id : "<<id[i]<<endl;
                cout<<"salary : "<<salary[i]<<endl;
            }
        }
        else if(choice==2){
            int search;
            cout<<"enter the employee id\n";
            cin>>search;
            for(int i=0;i<n;i++){
                if(id[i]==search){
                    cout<<"enter the updated salary\n";
                    cin>>salary[i];
                    cout<<"salary updated successfully\n";
                    break;
                }
            }
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