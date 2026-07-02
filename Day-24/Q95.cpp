// Write a program to Find longest word.

#include<iostream>
using namespace std;
int main(){
    char string[100];
    int length=0,max=0,start=0,temp=0;

    cout<<"enter the sentence\n";
    cin.getline(string,100);

    for(int i=0;;i++){
        if(string[i]!=' '&&string[i]!='\0'){
            length++;
        }
        else{
            if(length>max){
                max=length;
                start=temp;
            }
            length=0;
            temp=i+1;
        }

        if(string[i]=='\0'){
            break;
        }
    }

    cout<<"the longest word is ";

    for(int i=start;i<start+max;i++){
        cout<<string[i];
    }

    return 0;
}