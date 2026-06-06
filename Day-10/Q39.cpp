// Write a program to Print number pyramid. 
//     1 
//    121 
//   12321 
//  1234321 
// 123454321 

#include<iostream>
using namespace std;
int main(){
    int a=4;
    for(int i = 1 ; i <= 5 ; i++){
        for(int j=a;j>=1;j--){
            cout<<" ";
        }
        for(int k = 1 ; k<=(2*i-1)/2; k++){
            cout<<k;
        }
        for(int k = (2*i-1)/2+1 ; k>=1; k--){
            cout<<k;
        }
        a--;
        cout<<endl;
        }
    return 0;
}