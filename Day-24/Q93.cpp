// Write a program to Check string rotation.

#include<iostream>
using namespace std;
int main(){
    char string1[100],string2[100],temp[200];
    int length1=0,length2=0;
    int found=0;

    cout<<"enter the first string\n";
    cin.getline(string1,100);

    cout<<"enter the second string\n";
    cin.getline(string2,100);

    while(string1[length1]!='\0'){
        length1++;
    }

    while(string2[length2]!='\0'){
        length2++;
    }

    if(length1!=length2){
        cout<<"the strings are not rotations";
        return 0;
    }

    for(int i=0;i<length1;i++){
        temp[i]=string1[i];
    }

    for(int i=0;i<length1;i++){
        temp[length1+i]=string1[i];
    }

    temp[length1*2]='\0';

    for(int i=0;temp[i]!='\0';i++){
        found=1;
        for(int j=0;j<length2;j++){
            if(temp[i+j]!=string2[j]){
                found=0;
                break;
            }
        }
        if(found==1){
            cout<<"the strings are rotations";
            return 0;
        }
    }

    cout<<"the strings are not rotations";
    return 0;
}