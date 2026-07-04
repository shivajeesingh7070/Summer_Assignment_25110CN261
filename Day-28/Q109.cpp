// Write a program to Create library management system.

#include<iostream>
using namespace std;
int main(){
    char book[100];
    int bookid;
    int choice;
    int issued=0;

    cout<<"enter the book name\n";
    cin.getline(book,100);

    cout<<"enter the book id\n";
    cin>>bookid;

    do{
        cout<<"\n1. display book details\n";
        cout<<"2. issue book\n";
        cout<<"3. return book\n";
        cout<<"4. exit\n";

        cout<<"enter your choice\n";
        cin>>choice;

        if(choice==1){
            cout<<"book name : "<<book<<endl;
            cout<<"book id : "<<bookid<<endl;
            if(issued==0){
                cout<<"status : available\n";
            }
            else{
                cout<<"status : issued\n";
            }
        }
        else if(choice==2){
            if(issued==0){
                issued=1;
                cout<<"book issued successfully\n";
            }
            else{
                cout<<"book is already issued\n";
            }
        }
        else if(choice==3){
            if(issued==1){
                issued=0;
                cout<<"book returned successfully\n";
            }
            else{
                cout<<"book is already available\n";
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