// Write a program to Compress a string.

#include<iostream>
using namespace std;
int main(){
    char string[100];
    int counter;

    cout<<"enter the string\n";
    cin.getline(string,100);

    for(int i=0;string[i]!='\0';i++){
        counter=1;
        while(string[i]==string[i+1]){
            counter++;
            i++;
        }
        cout<<string[i];
        if(counter>1){
            cout<<counter;
        }
    }

    return 0;
}