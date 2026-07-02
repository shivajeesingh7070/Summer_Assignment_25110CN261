// Write a program to Convert lowercase to uppercase.

#include<iostream>
using namespace std;
int main(){
    char string[100];
    cout<<"enter the string\n";
    cin.getline(string,100);
    for(int i=0;string[i]!='\0';i++){
        if(string[i]>='a'&&string[i]<='z'){
            string[i]=string[i]-32;
        }
    }
    cout<<"the string after conversion is "<<string;
    return 0;
}