// Write a program to Find common characters in strings.

#include<iostream>
using namespace std;
int main(){
    char string1[100],string2[100];
    char common[100];
    int found,z=0;

    cout<<"enter the first string\n";
    cin.getline(string1,100);

    cout<<"enter the second string\n";
    cin.getline(string2,100);

    for(int i=0;string1[i]!='\0';i++){
        found=0;
        for(int j=0;string2[j]!='\0';j++){
            if(string1[i]==string2[j]){
                found=1;
                break;
            }
        }

        if(found==1){
            int count=0;
            for(int k=0;k<z;k++){
                if(common[k]==string1[i]){
                    count++;
                }
            }

            if(count==0){
                common[z]=string1[i];
                z++;
            }
        }
    }

    common[z]='\0';

    cout<<"the common characters are "<<common;

    return 0;
}