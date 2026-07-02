// Write a program to Sort words by length.

#include<iostream>
using namespace std;
int main(){
    int n,length1,length2;
    char temp[100];

    cout<<"enter the number of words\n";
    cin>>n;
    cin.ignore();

    char words[100][100];

    cout<<"enter the words\n";
    for(int i=0;i<n;i++){
        cin.getline(words[i],100);
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            length1=0;
            length2=0;

            while(words[j][length1]!='\0'){
                length1++;
            }

            while(words[j+1][length2]!='\0'){
                length2++;
            }

            if(length1>length2){
                for(int k=0;words[j][k]!='\0'||words[j+1][k]!='\0';k++){
                    temp[k]=words[j][k];
                    words[j][k]=words[j+1][k];
                    words[j+1][k]=temp[k];
                    if(temp[k]=='\0'&&words[j][k]=='\0'){
                        break;
                    }
                }
            }
        }
    }

    cout<<"the words after sorting are\n";
    for(int i=0;i<n;i++){
        cout<<words[i]<<endl;
    }

    return 0;
}