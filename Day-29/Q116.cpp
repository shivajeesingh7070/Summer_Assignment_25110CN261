// Write a program to Create inventory management system.

#include<iostream>
using namespace std;
int main(){
    char item[100];
    int quantity,choice;
    cout<<"enter the item name\n";
    cin.getline(item,100);
    cout<<"enter the quantity\n";
    cin>>quantity;
    do{
        cout<<"\n1. display inventory\n";
        cout<<"2. add quantity\n";
        cout<<"3. remove quantity\n";
        cout<<"4. exit\n";
        cout<<"enter your choice\n";
        cin>>choice;
        if(choice==1){
            cout<<"item name : "<<item<<endl;
            cout<<"quantity : "<<quantity<<endl;
        }
        else if(choice==2){
            int add;
            cout<<"enter the quantity to add\n";
            cin>>add;
            quantity=quantity+add;
            cout<<"quantity updated successfully\n";
        }
        else if(choice==3){
            int remove;
            cout<<"enter the quantity to remove\n";
            cin>>remove;
            if(remove<=quantity){
                quantity=quantity-remove;
                cout<<"quantity updated successfully\n";
            }
            else{
                cout<<"not enough quantity available\n";
            }
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