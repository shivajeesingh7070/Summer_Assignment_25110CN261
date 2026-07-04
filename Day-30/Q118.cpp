// Write a program to Create mini library system.

#include<iostream>
using namespace std;
int main(){
    char book[100][100];
    int issued[100];
    int n,choice;

    cout<<"enter the number of books\n";
    cin>>n;
    cin.ignore();

    for(int i=0;i<n;i++){
        cout<<"enter the book name\n";
        cin.getline(book[i],100);
        issued[i]=0;
    }

    do{
        cout<<"\n1. display books\n";
        cout<<"2. issue book\n";
        cout<<"3. return book\n";
        cout<<"4. exit\n";
        cout<<"enter your choice\n";
        cin>>choice;
        cin.ignore();

        if(choice==1){
            for(int i=0;i<n;i++){
                cout<<i+1<<". "<<book[i];
                if(issued[i]==0){
                    cout<<" (available)";
                }
                else{
                    cout<<" (issued)";
                }
                cout<<endl;
            }
        }
        else if(choice==2){
            int number;
            cout<<"enter the book number\n";
            cin>>number;
            if(issued[number-1]==0){
                issued[number-1]=1;
                cout<<"book issued successfully\n";
            }
            else{
                cout<<"book already issued\n";
            }
        }
        else if(choice==3){
            int number;
            cout<<"enter the book number\n";
            cin>>number;
            issued[number-1]=0;
            cout<<"book returned successfully\n";
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