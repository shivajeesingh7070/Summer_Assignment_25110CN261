// Write a program to Check anagram strings.

#include<iostream>
using namespace std;
int main(){
    char string1[100],string2[100];
    int length1=0,length2=0;
    int counter1[26],counter2[26];
    int anagram=1;

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
        cout<<"the strings are not anagrams";
        return 0;
    }

    for(int i=0;i<26;i++){
        counter1[i]=0;
        counter2[i]=0;
    }

    for(int i=0;i<length1;i++){
        if(string1[i]>='a'&&string1[i]<='z'){
            counter1[string1[i]-'a']++;
        }
        else if(string1[i]>='A'&&string1[i]<='Z'){
            counter1[string1[i]-'A']++;
        }
    }

    for(int i=0;i<length2;i++){
        if(string2[i]>='a'&&string2[i]<='z'){
            counter2[string2[i]-'a']++;
        }
        else if(string2[i]>='A'&&string2[i]<='Z'){
            counter2[string2[i]-'A']++;
        }
    }

    for(int i=0;i<26;i++){
        if(counter1[i]!=counter2[i]){
            anagram=0;
            break;
        }
    }

    if(anagram==1){
        cout<<"the strings are anagrams";
    }
    else
    cout<<"the strings are not anagrams";

    return 0;
}