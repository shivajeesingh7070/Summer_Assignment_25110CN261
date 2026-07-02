// Write a program to Character frequency.

#include<iostream>
using namespace std;
int main(){
    char string[100],character;
    int counter=0;
    cout<<"enter the string\n";
    cin.getline(string,100);
    cout<<"enter the character whose frequency is to be checked\n";
    cin>>character;
    for(int i=0;string[i]!='\0';i++){
        if(string[i]==character){
            counter++;
        }
    }
    cout<<"the frequency of "<<character<<" is "<<counter;
    return 0;
}