// Write a program to Create menu-driven array operations system.

#include<iostream>
using namespace std;
int main(){
    int n,choice,sum=0;
    cout<<"enter the size of the array\n";
    cin>>n;
    int array[n];
    cout<<"enter the elements of the array\n";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    do{
        cout<<"\n1. display array\n";
        cout<<"2. find sum\n";
        cout<<"3. find maximum\n";
        cout<<"4. exit\n";
        cout<<"enter your choice\n";
        cin>>choice;
        if(choice==1){
            for(int i=0;i<n;i++){
                cout<<array[i]<<" ";
            }
            cout<<endl;
        }
        else if(choice==2){
            sum=0;
            for(int i=0;i<n;i++){
                sum=sum+array[i];
            }
            cout<<"the sum of the array is "<<sum<<endl;
        }
        else if(choice==3){
            int maximum=array[0];
            for(int i=1;i<n;i++){
                if(array[i]>maximum){
                    maximum=array[i];
                }
            }
            cout<<"the maximum element is "<<maximum<<endl;
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