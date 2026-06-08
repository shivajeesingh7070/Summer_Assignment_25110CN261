// Write a program to Write function for palindrome. 

#include <iostream>
using namespace std;
void palindrome(int);

int main(){
    int number;
    cout<<"enter the number to be checked\n";
    cin>>number;
    palindrome(number);
    return 0;
}

void palindrome(int a){
    int temp,backup,rev=0;
    backup=a;
    while(a>0){
        temp=a%10;
        rev=rev*10 + temp; 
        a=a/10;
    }
    if(rev!=backup){
    cout<<"the number is not palindrome";
    }
    else
    cout<<"the number is palindrome";
}
