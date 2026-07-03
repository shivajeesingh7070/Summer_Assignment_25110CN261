// Write a program to Create marksheet generation system.

#include<iostream>
using namespace std;
int main(){
    char name[100];
    int roll;
    int maths,physics,chemistry,english,hindi;
    int total;
    float percentage;
    int choice;

    cout<<"enter the student name\n";
    cin.getline(name,100);

    cout<<"enter the roll number\n";
    cin>>roll;

    cout<<"enter the marks of maths\n";
    cin>>maths;

    cout<<"enter the marks of physics\n";
    cin>>physics;

    cout<<"enter the marks of chemistry\n";
    cin>>chemistry;

    cout<<"enter the marks of english\n";
    cin>>english;

    cout<<"enter the marks of hindi\n";
    cin>>hindi;

    total=maths+physics+chemistry+english+hindi;
    percentage=total/5.0;

    do{
        cout<<"\n1. display marksheet\n";
        cout<<"2. update marks\n";
        cout<<"3. exit\n";

        cout<<"enter your choice\n";
        cin>>choice;

        if(choice==1){
            cout<<"\nstudent name : "<<name<<endl;
            cout<<"roll number : "<<roll<<endl;
            cout<<"maths : "<<maths<<endl;
            cout<<"physics : "<<physics<<endl;
            cout<<"chemistry : "<<chemistry<<endl;
            cout<<"english : "<<english<<endl;
            cout<<"hindi : "<<hindi<<endl;
            cout<<"total marks : "<<total<<endl;
            cout<<"percentage : "<<percentage<<endl;

            if(percentage>=90){
                cout<<"grade : A";
            }
            else if(percentage>=75){
                cout<<"grade : B";
            }
            else if(percentage>=60){
                cout<<"grade : C";
            }
            else if(percentage>=40){
                cout<<"grade : D";
            }
            else{
                cout<<"grade : F";
            }
        }
        else if(choice==2){
            cout<<"enter the updated marks of maths\n";
            cin>>maths;

            cout<<"enter the updated marks of physics\n";
            cin>>physics;

            cout<<"enter the updated marks of chemistry\n";
            cin>>chemistry;

            cout<<"enter the updated marks of english\n";
            cin>>english;

            cout<<"enter the updated marks of hindi\n";
            cin>>hindi;

            total=maths+physics+chemistry+english+hindi;
            percentage=total/5.0;

            cout<<"marks updated successfully\n";
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