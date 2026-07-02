// Write a program to Remove spaces from string.

#include<iostream>
using namespace std;
int main(){
    char string[100];
    cout<<"enter the string\n";
    cin.getline(string,100);
    for(int i=0;string[i]!='\0';i++){
        if(string[i]==' '){
            for(int j=i;string[j]!='\0';j++){
                string[j]=string[j+1];
            }
            i--;
        }
    }
    cout<<"the string after removing spaces is "<<string;
    return 0;
}