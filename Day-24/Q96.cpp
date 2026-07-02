// Write a program to Remove duplicate characters.

#include<iostream>
using namespace std;
int main(){
    char string[100];
    char string2[100];
    int z=0,count;

    cout<<"enter the string\n";
    cin.getline(string,100);

    for(int i=0;string[i]!='\0';i++){
        count=0;
        for(int j=0;j<i;j++){
            if(string[i]==string[j]){
                count++;
            }
        }
        if(count==0){
            string2[z]=string[i];
            z++;
        }
    }

    string2[z]='\0';

    cout<<"the string after removing duplicate characters is "<<string2;

    return 0;
}