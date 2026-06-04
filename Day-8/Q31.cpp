/*Write a program to Print character triangle. 
  A 
  AB 
  ABC 
  ABCD 
  ABCDE */

#include<iostream>
using namespace std;
int main(){
    for(int i= 65; i<=69;i++){          //the ascii value of A is 65 
        for(int j = 65; j<=i;j++){
            cout<<(char)j;
        }
        cout<<endl;
    }
    return 0;
}