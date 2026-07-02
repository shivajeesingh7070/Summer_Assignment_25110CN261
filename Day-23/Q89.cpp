// Write a program to Find first non-repeating character.

#include<iostream>
using namespace std;
int main(){
    char string[100];
    int found=0,counter;
    cout<<"enter the string\n";
    cin.getline(string,100);
    for(int i=0;string[i]!='\0';i++){
        counter=0;
        for(int j=0;string[j]!='\0';j++){
            if(string[i]==string[j]){
                counter++;
            }
        }
        if(counter==1){
            cout<<"the first non repeating character is "<<string[i];
            found=1;
            break;
        }
    }
    if(found==0){
        cout<<"there is no non repeating character";
    }
    return 0;
}