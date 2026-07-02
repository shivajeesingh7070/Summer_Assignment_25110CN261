// Write a program to Count vowels and consonants.

#include<iostream>
using namespace std;
int main(){
    char string[100];
    int vowels=0,consonants=0;
    cout<<"enter the string\n";
    cin.getline(string,100);
    for(int i=0;string[i]!='\0';i++){
        if((string[i]>='A'&&string[i]<='Z')||(string[i]>='a'&&string[i]<='z')){
            if(string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U'||string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
    }
    cout<<"the number of vowels are "<<vowels<<endl;
    cout<<"the number of consonants are "<<consonants;
    return 0;
}