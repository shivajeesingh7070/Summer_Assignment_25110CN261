// Write a program to Find string length without strlen().

#include<iostream>
using namespace std;
int main(){
    char string[100];
    int length=0;
    cout<<"enter the string\n";
    cin.getline(string,100);
    while(string[length]!='\0'){
        length++;
    }
    cout<<"the length of the string is "<<length;
    return 0;
}