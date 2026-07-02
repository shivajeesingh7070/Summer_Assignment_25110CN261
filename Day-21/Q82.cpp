// Write a program to Reverse a string.

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
    for(int i=length-1;i>=0;i--){
        cout<<string[i];
    }
    return 0;
}