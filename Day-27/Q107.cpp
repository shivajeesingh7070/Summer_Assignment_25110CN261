// Write a program to Create salary management system.

#include<iostream>
using namespace std;
int main(){
    char name[100];
    int basic_salary,hra,da,total_salary;
    int choice;

    cout<<"enter the employee name\n";
    cin.getline(name,100);

    cout<<"enter the basic salary\n";
    cin>>basic_salary;

    hra=(basic_salary*20)/100;
    da=(basic_salary*10)/100;
    total_salary=basic_salary+hra+da;

    do{
        cout<<"\n1. display salary details\n";
        cout<<"2. update basic salary\n";
        cout<<"3. exit\n";

        cout<<"enter your choice\n";
        cin>>choice;

        if(choice==1){
            cout<<"employee name : "<<name<<endl;
            cout<<"basic salary : "<<basic_salary<<endl;
            cout<<"hra : "<<hra<<endl;
            cout<<"da : "<<da<<endl;
            cout<<"total salary : "<<total_salary<<endl;
        }
        else if(choice==2){
            cout<<"enter the updated basic salary\n";
            cin>>basic_salary;
            hra=(basic_salary*20)/100;
            da=(basic_salary*10)/100;
            total_salary=basic_salary+hra+da;
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