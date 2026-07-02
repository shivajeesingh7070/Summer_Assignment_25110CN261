// Write a program to Check palindrome string.

#include<iostream>
using namespace std;
int main(){
    char string[100];
    int length=0,palindrome=1;
    cout<<"enter the string\n";
    cin.getline(string,100);
    while(string[length]!='\0'){
        length++;
    }
    for(int i=0;i<length/2;i++){
        if(string[i]!=string[length-1-i]){
            palindrome=0;
            break;
        }
    }
    if(palindrome==1){
        cout<<"the string is palindrome";
    }
    else
    cout<<"the string is not palindrome";
    return 0;
}