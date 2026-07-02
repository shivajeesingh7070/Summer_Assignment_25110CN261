// Write a program to Sort names alphabetically.

#include<iostream>
using namespace std;
int main(){
    int n;
    char temp[100];

    cout<<"enter the number of names\n";
    cin>>n;
    cin.ignore();

    char names[100][100];

    cout<<"enter the names\n";
    for(int i=0;i<n;i++){
        cin.getline(names[i],100);
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            int k=0;
            while(names[j][k]==names[j+1][k]){
                if(names[j][k]=='\0'){
                    break;
                }
                k++;
            }

            if(names[j][k]>names[j+1][k]){
                for(int x=0;names[j][x]!='\0'||names[j+1][x]!='\0';x++){
                    temp[x]=names[j][x];
                    names[j][x]=names[j+1][x];
                    names[j+1][x]=temp[x];
                    if(temp[x]=='\0'&&names[j][x]=='\0'){
                        break;
                    }
                }
            }
        }
    }

    cout<<"the names after sorting are\n";
    for(int i=0;i<n;i++){
        cout<<names[i]<<endl;
    }

    return 0;
}