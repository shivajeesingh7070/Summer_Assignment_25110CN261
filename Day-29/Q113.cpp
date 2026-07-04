// Write a program to Create menu-driven calculator.

#include<iostream>
using namespace std;
int main(){
    int num1,num2,choice;
    cout<<"enter the first number\n";
    cin>>num1;
    cout<<"enter the second number\n";
    cin>>num2;
    do{
        cout<<"\n1. addition\n";
        cout<<"2. subtraction\n";
        cout<<"3. multiplication\n";
        cout<<"4. division\n";
        cout<<"5. exit\n";
        cout<<"enter your choice\n";
        cin>>choice;
        if(choice==1){
            cout<<"the sum is "<<num1+num2<<endl;
        }
        else if(choice==2){
            cout<<"the difference is "<<num1-num2<<endl;
        }
        else if(choice==3){
            cout<<"the product is "<<num1*num2<<endl;
        }
        else if(choice==4){
            if(num2!=0){
                cout<<"the quotient is "<<num1/num2<<endl;
            }
            else{
                cout<<"division by zero is not possible\n";
            }
        }
        else if(choice==5){
            cout<<"thank you";
        }
        else{
            cout<<"invalid choice\n";
        }
    }while(choice!=5);
    return 0;
}