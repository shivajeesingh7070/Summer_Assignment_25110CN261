// Write a program to Create menu-driven string operations system.

#include<iostream>
using namespace std;
int main(){
    char string[100];
    int choice,length;
    cout<<"enter the string\n";
    cin.getline(string,100);
    do{
        cout<<"\n1. display string\n";
        cout<<"2. find length\n";
        cout<<"3. convert to uppercase\n";
        cout<<"4. exit\n";
        cout<<"enter your choice\n";
        cin>>choice;
        if(choice==1){
            cout<<string<<endl;
        }
        else if(choice==2){
            length=0;
            while(string[length]!='\0'){
                length++;
            }
            cout<<"the length of the string is "<<length<<endl;
        }
        else if(choice==3){
            for(int i=0;string[i]!='\0';i++){
                if(string[i]>='a'&&string[i]<='z'){
                    string[i]=string[i]-32;
                }
            }
            cout<<"the updated string is "<<string<<endl;
        }
        else if(choice==4){
            cout<<"thank you";
        }
        else{
            cout<<"invalid choice\n";
        }
    }while(choice!=4);
    return 0;
}