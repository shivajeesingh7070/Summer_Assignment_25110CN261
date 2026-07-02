// Write a program to Count words in a sentence.

#include<iostream>
using namespace std;
int main(){
    char string[100];
    int words=1;
    cout<<"enter the sentence\n";
    cin.getline(string,100);
    if(string[0]=='\0'){
        words=0;
    }
    else{
        for(int i=0;string[i]!='\0';i++){
            if(string[i]==' '){
                words++;
            }
        }
    }
    cout<<"the number of words are "<<words;
    return 0;
}