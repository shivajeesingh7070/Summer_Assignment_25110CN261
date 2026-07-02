// Write a program to Find maximum occurring character.

#include<iostream>
using namespace std;
int main(){
    char string[100];
    int counter[100];
    int max_freq,corresponding;

    cout<<"enter the string\n";
    cin.getline(string,100);

    for(int i=0;string[i]!='\0';i++){
        counter[i]=0;
        for(int j=0;string[j]!='\0';j++){
            if(string[i]==string[j]){
                counter[i]++;
            }
        }
    }

    max_freq=counter[0];
    corresponding=0;

    for(int i=1;string[i]!='\0';i++){
        if(counter[i]>max_freq){
            max_freq=counter[i];
            corresponding=i;
        }
    }

    cout<<"the maximum occurring character is "<<string[corresponding]<<" and it occurred "<<max_freq<<" times";

    return 0;
}