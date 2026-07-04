// Write a program to Develop complete mini project using arrays, strings and functions.

#include<iostream>
using namespace std;

void display(char name[][100],int roll[],int marks[],int n);

int main(){
    int n,choice;
    cout<<"enter the number of students\n";
    cin>>n;
    cin.ignore();

    char name[100][100];
    int roll[100];
    int marks[100];

    for(int i=0;i<n;i++){
        cout<<"enter the student name\n";
        cin.getline(name[i],100);
        cout<<"enter the roll number\n";
        cin>>roll[i];
        cout<<"enter the marks\n";
        cin>>marks[i];
        cin.ignore();
    }

    do{
        cout<<"\n1. display records\n";
        cout<<"2. update marks\n";
        cout<<"3. exit\n";
        cout<<"enter your choice\n";
        cin>>choice;

        if(choice==1){
            display(name,roll,marks,n);
        }
        else if(choice==2){
            int search;
            cout<<"enter the roll number\n";
            cin>>search;
            for(int i=0;i<n;i++){
                if(roll[i]==search){
                    cout<<"enter the new marks\n";
                    cin>>marks[i];
                    cout<<"marks updated successfully\n";
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

void display(char name[][100],int roll[],int marks[],int n){
    for(int i=0;i<n;i++){
        cout<<"student "<<i+1<<endl;
        cout<<"name : "<<name[i]<<endl;
        cout<<"roll number : "<<roll[i]<<endl;
        cout<<"marks : "<<marks[i]<<endl;
    }
}